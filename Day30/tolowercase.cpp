//https://leetcode.com/problems/to-lower-case/submissions/
//tolowercase

class Solution {
public:
    string toLowerCase(string str) {
        for(int i=0;i<str.size();i++){
            if(str[i] >= 65 and str[i] <= 92) str[i] += 32;
        }
        return str;
    }
};