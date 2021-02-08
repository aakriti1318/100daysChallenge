#include<bits/stdc++.h>
using namespace std;

int common(vector<char> v1, vector<char> v2){
    set<char> s(v1.begin(),v1.end());
    int ans = 0;
    for(auto x:v2){
        if(s.find(x)!=s.end()) ans++;
    }
    return ans;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        map<string,vector<char>> mp;
        string s;
        for(int i=0;i<n;i++){
            cin>>s;
            if(s.length()>0){
                mp[s.substr(1)].push_back(s[0]);
            }
        }
        int ans=0;
        for(auto i:mp){
            for(auto j:mp){
                int c = common(i.second,j.second);
                ans += (i.second.size()-c)*(j.second.size()-c);
            }
        }
        cout<<ans<<endl;
    }
}