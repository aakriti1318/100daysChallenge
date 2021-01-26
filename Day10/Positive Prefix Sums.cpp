//Minimum Initial Value for Positive Prefix Sums
//https://binarysearch.com/room/print(roomName)-qfmCL5Jnz5

int solve(vector<int>& nums) {
    auto minn = 0,sum=0;
    for(int i=0;i<nums.size();i++){
        sum += nums[i];
        minn = min(minn,sum);
    }
    return 1-minn;
}