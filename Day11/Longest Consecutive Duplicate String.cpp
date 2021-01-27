//https://binarysearch.com/room/Hash-Brown-Map-b8B8dpfsyY
//Longest Consecutive Duplicate String

int solve(string s) {
    int ans = s.size()>0 ? 1:0;
    int count=1;
    for(int i=1;i<s.size();i++){
        if(s[i] == s[i-1]) ans = max(ans,++count);
        else count=1;
    }
    return ans;
}