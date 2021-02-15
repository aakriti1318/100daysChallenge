//https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/
//1662. Check If Two String Arrays are Equivalent

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1,s2;
        
        for(auto c:word1) s1+=c;
        for(auto c:word2) s2+=c;
        
        return s1 == s2;
    }
};