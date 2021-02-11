//https://leetcode.com/problems/split-a-string-in-balanced-strings/
//Split a String in Balanced Strings

class Solution {
public:
    int balancedStringSplit(string s) {
        int count1=0, count2=0, ans=0,i;
        while(i<s.size()){
            if(s[i] == 'L') count1++;
            else count2++;
            if(count1 == count2){
                ans++;
                count1 = 0; count2 = 0;
            }
            i++;
        }
        return ans;
    }
};

