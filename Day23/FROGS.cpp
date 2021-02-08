#include <bits/stdc++.h> 
using namespace std; 
#define ll long long
int main(){
    ll t; cin>>t; 
    while(t--){
        ll n; cin>>n;
        ll w[n],l[n];
        for(ll i=0;i<n;i++) 
            cin>> w[i];
        
        for(ll i=0;i<n;i++)
            cin>> l[i];


        if(n==2){
            if(w[0] == 1 and w[1] == 2) cout<<"0"<<endl;
            else {
                if(l[0] == 1) cout<<"2"<<endl;
                else cout<<"1"<<endl;
            }
        }

        else if(n==3){
            ll a,b,c,a1,b1,c1;
            ll ans=0;
            for(ll i=0;i<n;i++){
                if(w[i] == 1){
                    a = i; 
                    a1 = i;
                }
                else if(w[i] == 2){
                    b = i;
                    b1 = i;
                }
                else if(w[i] == 3){
                    c = i; 
                    c1 = i;
                }
            }
            while(c<=b || b<=a || c<=a){
                while(b<=a){
                    b+=l[b1]; ans++;
                }
                while(c<=b || c<=a){
                    c += l[c1]; ans++;
                }
            }
            cout<<ans<<endl;
        } 

        else if(n==4){
            ll a,b,c,d,a1,b1,c1,d1;
            ll ans=0;
            for(ll i=0;i<n;i++){
                if(w[i] == 1){
                    a = i; 
                    a1 = i;
                }
                else if(w[i] == 2){
                    b = i; 
                    b1 = i;
                }
                else if(w[i] == 3){
                    c = i; 
                    c1 = i;
                }
                else if(w[i] == 4){
                    d = i; 
                    d1 = i;
                }
            }
            while(d<=c || d<=b || d<=a || c<=b || b<=a || c<=a){
                while(b<=a){
                    b+=l[b1]; ans++;
                }
                while(c<=b || c<=a){
                    c += l[c1]; ans++;
                }
                while(d<=a || d<=b || d<=c){
                    d += l[d1]; ans++;
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
