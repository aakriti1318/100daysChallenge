//https://binarysearch.com/room/vim-greater-emacs-WBG1t3OS7h?questionsetIndex=2
//Longest Consecutive Run of 1s in Binary
int solve(int n) {
    int count=0;
    while(n!=0){
        n = n & (n<<1);
        count++;
    }
    return count;
}