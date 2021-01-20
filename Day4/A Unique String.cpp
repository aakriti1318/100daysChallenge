//https://binarysearch.com/problems/A-Unique-String/submissions/3530383

bool solve(string s) {
    unordered_map<char,int> mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    for(auto& i:mp){
        if(i.second>=2) return false;
    }
    return true;
}