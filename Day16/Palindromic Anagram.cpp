//https://binarysearch.com/room/Hash-Table-enbLCVHWLZ
//Palindromic Anagram

bool solve(string s) {
    unordered_map<char,int> mp;
    for(int i=0;i<s.size();i++) mp[s[i]]++;
    int count=0;
    for(auto& ip:mp){
        if(ip.second&1) count++;
        if(count>1) return false;
    }
    return true;
}