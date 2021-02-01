//https://binarysearch.com/room/A*-Student-ZWbROxxWyS
//Sum of Two Numbers

bool solve(vector<int>& nums, int k) {
    unordered_set<int> s;
    for(int i=0;i<nums.size();i++){
        int tmp = k-nums[i];
        if(s.find(tmp)!=s.end()) return true;
        s.insert(nums[i]);
    }
    return false;
}