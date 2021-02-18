//https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/submissions/
//Find Words That Can Be Formed by Characters

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> mp;
        for(auto ch:chars) mp[ch]++;
        
        bool flag = true;
        string ans ="";
        for(auto word:words){
            flag = true;
            unordered_map<char,int> m;
            for(auto &c:word) m[c]++;
            
            for(auto &c:word) 
                if(m[c] > mp[c]) flag = false;
            
            if(flag == true) ans+=word;
        }
        return ans.size();
    }
};
