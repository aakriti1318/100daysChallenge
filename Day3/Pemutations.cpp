#include<bits/stdc++.h>
using namespace std;
void permute(char *ip, int i){
    //base case
    if(ip[i]=='\0'){
        cout<<ip<<endl;
        return;
    }
    //rec case
    for(int j=i;ip[j]!='\0';j++){
        swap(ip[i],ip[j]);
        permute(ip,i+1);
        swap(ip[i],ip[j]); // backtracking
    }
}
int main(){
    char ip[1000];
    cin>>ip;
    permute(ip,0);
    return 0;
}