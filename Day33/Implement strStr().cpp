//https://leetcode.com/problems/implement-strstr/submissions/
// Implement strStr()
class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.size();
        int n = needle.size();
        if(n == 0) return 0;
        int j=0;
        for(int i=0;i<h;i++){
            if(haystack[i] == needle[j]){
                j++;
            }
            else{
                i-=j;
                j=0;
            }
            if(j == n) return i-j+1;
        }
        return -1;
    }
};


