#include<bits/stdc++.h>
using namespace std;
int countPrimes(int n){
    if (n <= 2) return 0;
    int ans = n >> 1, m = sqrt(n - 1);
    unsigned char *table = new unsigned char[n / 8 + 1];
    memset(table, 0xff, n / 8 + 1);
    for (int i = 3, j, step; i <= m; i += 2) {
        if (table[i / 8] & (1 << (i % 8))) { 
            for (step = i * 2, j = i*i; j < n; j += step) { 
                if (table[j / 8] & (1 << (j % 8))) {
                    table[j / 8] ^= (1 << (j % 8)); 
                    --ans;
                }
            }
        }
    }
    delete[] table;
    return ans;
}

int main(){
    int t; cin>>t;
    while(t--){
        int x,y; cin>>x>>y;
        x = countPrimes(x);
        if(x < y) cout<<"Chef"<<endl;
        else cout<<"Divyam"<<endl;
    }
    return 0;
}