//https://leetcode.com/problems/intersection-of-two-arrays-ii/submissions/
// Intersection of Two Arrays II

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        vector<int> v;
        for(int i=0;i<nums1.size();i++){ 
            mp[nums1[i]]++;
        }
        for(int j=0;j<nums2.size();j++){
            if(mp.find(nums2[j])!=mp.end()){
                if(mp[nums2[j]]>0){
                    mp[nums2[j]]--;
                    v.push_back(nums2[j]);
                }
            }
        }
        return v;
    }
};