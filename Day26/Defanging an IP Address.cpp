//https://leetcode.com/problems/defanging-an-ip-address/
//Defanging an IP Address

class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        for(auto c:address){
            if(isdigit(c)) ans += c;
            else ans+="[.]";
        }
        return ans;
    }
};