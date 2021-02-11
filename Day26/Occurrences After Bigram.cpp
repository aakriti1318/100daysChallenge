//https://leetcode.com/problems/occurrences-after-bigram/
//Occurrences After Bigram

class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ans;
        istringstream ss(text);
        string a,b,word;
        
        while(ss>>word){
            if(a == first and b == second) ans.push_back(word);
            a=b;
            b=word;
        }
        return ans;
    }
};