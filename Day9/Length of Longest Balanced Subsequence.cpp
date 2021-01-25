//https://binarysearch.com/room/Stack-p8GAFirlF5
//Length of Longest Balanced Subsequence

int solve(string s) {
    int open=0, close=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') open++;
        else{
            if(open==0){
                close++;
            }
            else open--;
        }
    }
    return s.size()-(open+close);
}