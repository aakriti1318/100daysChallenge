class Solution {
public:
    vector<int> aux;
    int total=0;
    
    Solution(vector<int>& w) {
        for(int i=0;i<w.size();i++){
            total+=w[i];
            aux.push_back(total);
    }
    }
    
    int pickIndex() {
        int target =rand()%total;
        return upper_bound(aux.begin(),aux.end(),target)-aux.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */

