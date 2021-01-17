#include<bits/stdc++.h>
using namespace std;
#define ll long long

void primeSieve(int *p){
    for(int i=3;i<1000000;i+=2) p[i] = 1;
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
    int p[1000005]={0};
    primeSieve(p);
    int csum[1000005] = {0};
    for(ll i=1;i<=1000000;i++){
        csum[i] = csum[i-1] + p[i];
    }
    int q; cin>>q;
    while(q--){
        ll a,b; cin>>a>>b;
        cout<<csum[b]-csum[a-1]<<endl;
    }
    return 0;
}
