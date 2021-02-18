//https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/submissions/
// Find Words That Can Be Formed by Characters

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> v(26);
        int ans=0;
        for(auto c:chars) ++v[c-'a'];
        for(auto word:words){
            vector<int> vec = v;
            bool flag = true;
            for(auto ch:word){
                if(--vec[ch-'a']<0){
                    flag = false;
                    break;
                }
            }
            if(flag == true) 
                ans += word.size();
        }
        return ans;
    }
};