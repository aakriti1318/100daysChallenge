#include<bits/stdc++.h>
using namespace std;
#define ll long long

void primeSieve(ll *p){
    for(ll i=3;i<1000000;i+=2) p[i] = 1;
    for(ll i=3;i<1000000;i+=2){
        if(p[i]==1){
            for(ll j=i*i;j<1000000;j+=i){
                p[j] = 0;
            }
        }
    }
    p[2]=1;
    p[0]=p[1]=0;
}

int main() {
    ll p[1000005]={0};
    primeSieve(p);
    ll n;
    cin>>n;
    for(int i=0;i<=n;i++){
        if(p[i] == 1){
            cout<<i<<" ";
        }
    }
    return 0;
}
