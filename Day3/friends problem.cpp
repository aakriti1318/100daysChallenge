//friends problem

#include<bits/stdc++.h> 
using namespace std;

int binomialCoeff(int n, int k){
    int res = 1;
    if(k<n-k){
        k = n-k;
    }
    for(int i=0;i<k;i++){
        res *= (n-i);
        res /= (i+1);
    }
    return res;
}

int frnd(int n){
    if(n<=1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    return frnd(n-1) + binomialCoeff(n-1,1)* frnd(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<frnd(n);
    return 0;
    
}
