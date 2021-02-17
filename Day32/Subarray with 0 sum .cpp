
//Subarray with 0 sum
bool subArrayExists(int arr[], int n)
{
    unordered_set<int> s;
    int presum = 0;
    for(int i=0;i<n;i++){
        presum += arr[i];
        if(presum == 0) return true;
        if(s.find(presum)!=s.end()){
            return true;
        }
        s.insert(presum);
    }
    return false;
}
