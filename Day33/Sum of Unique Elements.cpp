//https://leetcode.com/problems/sum-of-unique-elements/
// Sum of Unique Elements
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int sum=0;
        for(auto &ip:mp){
            if(ip.second==1){
                sum+=ip.first;
            }
        }
        return sum;
    }
};