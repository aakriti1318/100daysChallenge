//https://binarysearch.com/room/Stack-p8GAFirlF5
//Text Editor

string solve(string s) {
    string str;
    auto ip = s.begin();
    while(ip!=s.end()){
        if(*ip == '<' and *(ip+1) == '-'){
            if(!str.empty()) str.pop_back();
            ip++;
        }
        else str.push_back(*ip);

        ip++;
    }
    return str;
}