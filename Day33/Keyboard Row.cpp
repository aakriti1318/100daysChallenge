//https://leetcode.com/problems/keyboard-row/
//Keyboard Row

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set first = {'q','Q','w','W','e','E','r','R','t','T','y','Y','u','U','i','I','o','O','p','P'};
        unordered_set sec = { 'a','A','s','S','d','D','f','F','g','G','h','H','j','J','k','K','l','L'};
        unordered_set third = {'z','Z','x','X','c','C','v','V','b','B','n','N','m','M'};
        
        vector<string> ans;
        for(auto &word:words){
            bool f1 = true, f2 = true, f3 = true;
            for(auto &c:word){
                if(f1){
                    auto it = first.find(c);
                    if(it == first.end()) f1 = false;
                }
                if(f2){
                    auto it = sec.find(c);
                    if(it == sec.end()) f2 = false;
                }
                if(f3){
                    auto it = third.find(c);
                    if(it == third.end()) f3 = false;
                }
            }
            if(f1||f2||f3) ans.push_back(word);
        }
        return ans;
    }
};

