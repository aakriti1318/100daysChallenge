//https://binarysearch.com/room/Stack-p8GAFirlF5
//Minimum Bracket Addition


int solve(string s) {
    int count=0, ans=0;
    for(int i=0;i<s.size();++i){
        count+= s[i] == '('?1:-1;
        if(count == -1){
            count+=1;
            ans+=1;
        }
    }
    return count+ans;
}