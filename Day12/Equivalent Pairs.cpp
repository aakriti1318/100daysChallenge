//https://binarysearch.com/room/Array-of-Sunshine-dVzd4z9crP
//Equivalent Pairs

int solve(vector<int>& nums) {
    unordered_map<int,int> mp;
    int ans=0;
    for(int i=0;i<nums.size();i++){
        ans += mp[nums[i]]++;
    }
    return ans;
}