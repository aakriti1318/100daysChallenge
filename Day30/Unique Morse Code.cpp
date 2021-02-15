//https://leetcode.com/problems/unique-morse-code-words/submissions/
//Unique Morse Code Words

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string alpha = "abcdefghijklmnopqrstuvwxyz";
        string code[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        vector<string> ans;
        for(auto& word:words){
            string s = "";
            for(auto& c:word){
                int idx = alpha.find(c);
                s += code[idx];
            }
            if(find(ans.begin(), ans.end(), s) != ans.end()) {
                //pass;
            }
            else ans.push_back(s);
        }
        return ans.size();
    }
};
        

