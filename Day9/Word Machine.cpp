//https://binarysearch.com/room/Stack-p8GAFirlF5
// Word Machine

bool isInt(string S) {
    for (string check : {"POP", "DUP", "+", "-"}) {
        if (check == S) return false;
    }
    return true;
}
int solve(vector<string>& ops) {
    int counter = 0;
    int n = ops.size();
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        if (isInt(ops[i])) {
            arr[counter++] = stoi(ops[i]);
        } else {
            if (ops[i] == "POP") {
                if (counter >= 1)
                    counter--;
                else
                    return -1;
            } else if (ops[i] == "DUP") {
                if (counter >= 1)
                    arr[counter] = arr[counter - 1], counter++;
                else
                    return -1;
            } else if (ops[i] == "+") {
                if (counter >= 2) {
                    int temp = arr[counter - 1] + arr[counter - 2];
                    counter -= 2;
                    arr[counter++] = temp;
                } else
                    return -1;
            } else {
                if (counter >= 2) {
                    int temp = arr[counter - 1] - arr[counter - 2];
                    counter -= 2;
                    arr[counter++] = temp;
                } else
                    return -1;
            }
        }
    }
    return (counter > 0 ? arr[counter - 1] : -1);
}
