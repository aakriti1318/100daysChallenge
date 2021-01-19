// https://codeforces.com/problemset/problem/937/A
//937A - Olympiad

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        if(a != 0){
            v.push_back(a);
        }
    }
    vector<int>::iterator ip; 
    int ans; 
    sort(v.begin(), v.end()); 
    n = v.size();
    ans = distance(v.begin(), unique(v.begin(), v.begin() + n)); 
    cout<<ans;

}