
// 0-1 Knapsack 

#include<bits/stdc++.h>
using namespace std;

int profit(int n, int c, int wt[], int prices[]){
    if(n==0 || c==0) return 0;
    int inc = INT_MIN,exc = INT_MIN;
    int ans = 0;
    if(wt[n-1]<=c){
        inc = prices[n-1]+profit(n-1,c-wt[n-1],wt,prices);
    }
    exc = profit(n-1,c,wt,prices);
    ans = max(inc,exc);
    return ans; 
}
int main(){
    int n,c;
    cin>>n>>c;
    int wt[n],prices[n];
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    cout<<profit(n,c,wt,prices);
    return 0;
}