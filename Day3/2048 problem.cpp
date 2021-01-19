// 2048 problem

#include<bits/stdc++.h>
using namespace std;
char words[][6] = {"zero","one","two","three","four","five"};
void compute(int n){
    if(n==0){
        return;
    }
    compute(n/10);
    int digit = n%10;
    cout<<words[digit]<<" ";

}
int main(){
    int n;
    cin>>n;
    compute(n);
    return 0;
}