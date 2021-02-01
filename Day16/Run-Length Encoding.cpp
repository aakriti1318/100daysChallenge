//https://binarysearch.com/room/the-bro-grammers-dmeGv17gUN
//Run-Length Encoding

string solve(string s) {
    string str;
    for(int i=0;i<s.size();i++){
        int cnt = 1;
        while(i<s.size()-1 and s[i] == s[i+1]) cnt++, i++;
        str += to_string(cnt);
        str.push_back(s[i]);
    }
    return str;
}