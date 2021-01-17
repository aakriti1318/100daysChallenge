// https://codeforces.com/problemset/problem/831/B
// 831B. Keyboard Layouts

#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b,c;
    cin>>a>>b>>c;
    map<char,char> mp;
    for(int i=0;i<a.size();i++){
        mp[a[i]] = b[i];
    }
    char ch;
    for(int i=0;i<c.size();i++){
        if(isdigit(c[i])){
            cout<<c[i];
            continue;
        }
        if(mp[c[i]]){
            cout<<mp[c[i]];
        }
        else{
            if(isupper(c[i])){
                ch = mp[c[i]+32]-32;
                cout<<ch;
            }
            else{
                ch = mp[c[i]-32]+32;
                cout<<ch;
            }
        }
    }
    return 0;
}
