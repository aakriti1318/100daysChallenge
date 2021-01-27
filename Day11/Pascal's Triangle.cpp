//https://binarysearch.com/room/Hash-Brown-Map-b8B8dpfsyY
//Pascal's Triangle

vector<int> solve(int n) {
    vector<int> v;
    int first = 1;
    v.push_back(first);
    for (int i = 1; i <= n; i++) { 
        int x = first * (n - i + 1) / i;  
        v.push_back(x);
        first = x;
    } 
    return v;
}