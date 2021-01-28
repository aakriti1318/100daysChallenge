//https://binarysearch.com/room/Array-of-Sunshine-dVzd4z9crP
//Longest Common Prefix

string solve(vector<string>& words) {
    if (words.size() == 1) {
        return words[0];
    }
    string ans = words[0];

    for (int i = 1; i < words.size(); i++) {
        int k = 0, j = 0, m = ans.size(), n = words[i].size();
        while (k < m && j < n && ans[j] == words[i][j]) {
            k++;
            j++;
        }
        ans = ans.substr(0, k);
    }

    return ans;
}
