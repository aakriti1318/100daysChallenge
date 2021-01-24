//https://binarysearch.com/room/Hash-Table-EUc9abU8tB
//Split List Into Strictly Increasing Chunks

bool solve(vector<int>& nums, int k) {
    int n = nums.size();
    if(k==0) return true;
    if(k>n) return false;
    unordered_map<int,int> mp;
    int count=(n)/k;
    for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
    }
    for(auto& ip:mp){
        if(ip.second > count){
            return false;
        }
    }
    return true;
}
