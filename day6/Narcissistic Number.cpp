//https://binarysearch.com/room/vim-greater-emacs-WBG1t3OS7h?questionsetIndex=1
//Narcissistic Number


bool solve(int n) {
    int num = n;
    int sum=0;
    int count = floor(log10(n) + 1); 
    while(n!=0){
        int digit = n%10;
        sum += pow(digit,count);
        n=n/10;
    }
    if(num == sum) return true;
    else return false;
}