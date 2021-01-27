//https://binarysearch.com/room/Hash-Brown-Map-b8B8dpfsyY
//In-Place Move Zeros to End of List

vector<int> solve(vector<int>& nums) {
    int count = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0) swap(nums[count++],nums[i]);
    }
    return nums;
}