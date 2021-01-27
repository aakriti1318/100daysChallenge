//https://binarysearch.com/room/Full-Stack-of-Pancakes-ainQiuvsDO
//Unobstructed Buildings

vector<int> solve(vector<int>& heights) {
    vector<int> v;
    int curr = INT_MIN;
    for(int i=heights.size()-1;i>=0;i--){
        if(heights[i]>curr){
            curr = heights[i];
            v.push_back(i);
        }
    }
    reverse(v.begin(),v.end());
    return v;
}
