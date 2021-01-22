//https://binarysearch.com/problems/Word-Formation
// Word Formation


unordered_map<char,int> freq(const string& s){
    unordered_map<char,int> mp;
    for(auto ip:s){
        mp[ip]++;
    }
    return mp;
}

int solve(vector<string>& words, string letters) {
    auto lf = freq(letters);
    int count=0;
    for(auto word:words){
        auto ch = freq(word);
        bool isvalid = true;
        for(auto it:ch){
            if(it.second>lf[it.first]) isvalid = false;
        }
        if(!isvalid) continue;
        int len = word.length();
        if(len>count) count=len;
    }
    return count;
}