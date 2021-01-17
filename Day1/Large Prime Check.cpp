#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

const int n=10000000;
vector<int> primes;
bitset<10000000> b;

void sieve(){
    b.set();
    b[0]=b[1]=0;
    for(ll i=2;i<=n;i++){
        if(b[i]){
            primes.push_back(i);
            for(ll j=i*i;j<=n;j+=i){
                b[j] = 0;
            }
        }
    }
}

bool isPrime(ll no){
    if(no<=n){
        return b[no] == 1?true:false;
    }
    for(ll i=0; primes[i]*(long long)primes[i] <= no;i++){
        if(no%primes[i] == 0){
            return false;
        }
    }
    return true;
}

int main(){
    sieve();
    ll n; cin>>n;
    if(isPrime(n)) cout<<"Yes";
    else cout<<"No";
    return 0;
}