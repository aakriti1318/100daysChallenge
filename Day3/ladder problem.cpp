//ladder problem

#include<bits/stdc++.h>
using namespace std;
int compute(int n,int k){
    //base case
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    int ans=0;
    //rec case
    for(int i=1;i<=k;i++){
        ans += compute(n-i,k);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int k=3;
    cout<<compute(n,k);
    return 0;
}