//https://binarysearch.com/problems/Reverse-Words/submissions/3530342

string solve(string str) {
    reverse(str.begin(),str.end());
    str.insert(str.end(),' ');
    int j=0;
    for(int i=0;i<str.size();i++){
        if(str[i] == ' '){
            reverse(str.begin()+j,str.begin()+i);
            j = i+1;
        }
    }
    str.pop_back();
    return str;
}