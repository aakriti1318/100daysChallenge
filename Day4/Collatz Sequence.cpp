//https://binarysearch.com/problems/Collatz-Sequence/submissions/3530302

int solve(int n) {
    int count=0;
    while(n!=1){
        if(n&1){
            n = 3*n+1;
            count++;
        }
        else{
            n = n/2;
            count++;
        }
    }
    return count+1;
}