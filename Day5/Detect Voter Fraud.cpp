//https://binarysearch.com/room/Spaghetti-Code-xKPi6TenfS
//Detect Voter Fraud

bool solve(vector<vector<int>>& votes) {
    unordered_map<int,int> mp;
    int n = votes.size();
    for(int i=0;i<n;i++){
        mp[votes[i][1]]++;
    }
    for(auto i:mp){
        if(i.second>=2){
            return true;
        }
    }
    return false;
}