#include <bits/stdc++.h> 
using namespace std; 
#define ll long long
int main(){
    ll n; cin>>n;
    for(ll i=10;i>=1;i--){
        if(n%i == 0) break;
    }
    cout<<i;
}
