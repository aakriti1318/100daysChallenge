#include<bits/stdc++.h>
using namespace std;

bool check_number(string str) {
   for (int i = 0; i < str.length(); i++)
   if (isdigit(str[i]) == false)
      return false;
    return true;
}

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        if(check_number(s) and s.size()==10){
            if(s[0] == '0') cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}