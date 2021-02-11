//https://leetcode.com/problems/goal-parser-interpretation/submissions/
//Goal Parser Interpretation

class Solution {
public:
    string interpret(string s) {
        string ans;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'G') ans+=s[i];
            else if(s[i] == '(' and s[i+1] == 'a'){
                ans += "al";
                i+=2;
            }
            else if(s[i] == '(' and s[i+1] == ')'){
                ans += 'o';
                i++;
            }
        }
        return ans;
    }
};