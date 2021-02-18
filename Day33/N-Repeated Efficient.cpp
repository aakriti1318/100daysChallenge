//https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
// N-Repeated Element in Size 2N Array

class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_set<int> s;
        int ans;
        for(auto &x:A){
            if(s.find(x)!=s.end()){
                ans = x;
            }
            s.insert(x);
        }
        return ans;
    }
};