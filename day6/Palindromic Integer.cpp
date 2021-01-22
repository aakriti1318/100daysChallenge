//https://binarysearch.com/room/vim-greater-emacs-WBG1t3OS7h
//Palindromic Integer


bool solve(int num) {
    string str,s;
    str = to_string(num);
    s = str;
    reverse(str.begin(),str.end());
    if(s == str) return true;
    else return false;
}