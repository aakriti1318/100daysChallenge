//https://binarysearch.com/room/Hash-Table-0QCe6OVk9P
//Unique People in Contact List

int solve(vector<vector<string>>& contacts) {
    unordered_set<string> s;
    int ans = 0;
    for(auto person : contacts) {
        bool unique = true;
        for (auto email : person) {
            if (s.count(email)) {
                unique = false;
            }
            s.insert(email);
        }
        ans += unique;
    }
    return ans;
}