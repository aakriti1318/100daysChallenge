//https://binarysearch.com/room/Hash-Table-EUc9abU8tB
//String Isomorphism

bool solve(string s, string t) {
    map<char,char> mp,mq;
    if(s.size()!=t.size()) return false;
    for(int i=0;i<s.size();i++){
        if(mp.find(s[i])!=mp.end() and mp[s[i]]!=t[i]) return false;
        if(mq.find(t[i])!=mq.end() and mq[t[i]]!=s[i]) return false;
        mp[s[i]] = t[i];
        mq[t[i]] = s[i];
    }
    return true;
}
