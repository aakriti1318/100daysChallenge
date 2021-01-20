//https://binarysearch.com/problems/Arithmetic-Sequence-Permutation/submissions/3529193

bool solve(vector<int>& nums) {
    if(nums.size() == 1)
        return true;
    sort(nums.begin(),nums.end());
    int diff = nums[1] - nums[0];
    for(int i=2;i<nums.size();i++){
        if(nums[i] - nums[i-1] != diff){
            return false;
        }
    }
    return true;
}