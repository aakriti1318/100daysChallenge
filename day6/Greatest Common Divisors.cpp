//https://binarysearch.com/room/DP-Experts-aypBLD6Xyy
//Greatest Common Divisors

int solve(vector<int>& nums) {
    if(nums.size()==1) return nums[0];
    int ans = nums[0];
    for(int i=1;i<nums.size();i++){
        ans = __gcd(nums[i],ans);
    }
    return ans;
}