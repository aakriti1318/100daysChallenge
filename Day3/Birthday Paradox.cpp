/*      BIRTHDAY PARADOX PROBLEM
    Problem Statement : Min number of ppl that should be +nt in a hall so that there's 50% chance of 2ppl having same birthday
*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    float x = 1.0;
    int people = 0;
    float num=365, denom = 365;
    float p;
    cin>>p;
    if(p==1.0){
        cout<<"366"<<endl;
        return 0;
    }
    while(x>1-p){
        x = x*(num)/denom;
        num--;
        people++;
        cout<<people<<" people and x "<<x<<endl;
    }
    return 0;
}