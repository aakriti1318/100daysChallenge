#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

const int n = 10000000;
bitset<10000005> b;
vector<int> primes;

void sieve(){
    b.set(); // sets the array with 1..
    b[0]=b[1]=0;
    for(ll i=2;i<=n;i++){
        if(b[i]){
            primes.push_back(i);
            for(ll j=i*i; j<=n;j+=i){
                b[j]=0;
            }
        }
    }
}

int main(){
    int n; cin>>n;
    sieve(); 
    for(int i=0;i<n;i++){
        cout<<primes[i]<<" ";
    }
    return 0;
}