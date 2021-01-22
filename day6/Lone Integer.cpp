//https://binarysearch.com/room/Bit-Manipulation-8PL4lVMQZB
//Lone Integer

int solve(vector<int>& nums) {
    long int ans1=0;
    int ans[64]={0};
    int n = nums.size();
    for (long int j=0;j<n;j++){
        int temp = nums[j],count=0;
        while (temp>0){
            ans[count]+=(temp&1);
            count++;
            temp/=2;
        }
    }
    int p=1;
    for (int j=0;j<64;j++){
        ans[j]%=3;
        ans1+=ans[j]*p;
        p*=2;
    }
    return ans1;  
}