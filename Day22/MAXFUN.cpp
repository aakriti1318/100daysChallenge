#include <bits/stdc++.h> 
using namespace std; 
#define ll long long
int main(){
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n; 
        ll a[n]; 
        for(int i=0;i<n;i++) cin>>a[i];

        sort(a,a+n);
        ll ans = (abs(a[0]-a[1]) + abs(a[0]-a[n-1]) + abs(a[1]-a[n-1]));
        cout<<ans<<endl;
    }
    return 0;
}
