//https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
// N-Repeated Element in Size 2N Array

class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_map<int,int> mp;
        for(int i=0;i<A.size();i++)
            mp[A[i]]++;
        
        int ans=0;
        for(auto &ip:mp){
            if(ip.second > 1) ans = ip.first;
        }
        return ans;
    }
};