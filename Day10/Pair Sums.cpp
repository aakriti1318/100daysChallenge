//https://binarysearch.com/room/print(roomName)-qfmCL5Jnz5
//Pair Sums

int solve(vector<int>& nums) {
    int odd=0, even=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]&1) odd++;
        else even++;
    }
    int ans=0;
    ans += even * odd;
    return ans;
}