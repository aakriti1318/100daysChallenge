//https://binarysearch.com/room/Hash-Table-EUc9abU8tB
//Unique Occurrences

bool solve(vector<int>& nums) {
    unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    unordered_set<int> s; 
    int ans;
    for(auto& ip:mp){
        s.insert(ip.second);
    }
    return s.size() == mp.size() ? true : false;
}