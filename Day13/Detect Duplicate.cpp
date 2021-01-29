//https://binarysearch.com/room/A*-Student-ZWbROxxWyS
//Detect the Only Duplicate in a List

// int solve(vector<int>& nums) {
//     unordered_map<int,int> mp;
//     int ans;
//     for(int i=0;i<nums.size();i++) mp[nums[i]]++;
//     for(auto& ip:mp){
//         if(ip.second>1) ans=ip.first;
//     }
//     return ans;
// }

int solve(vector<int>& nums) {
    int n = nums.size() - 1;  // set n to nums.size-1
    int s = 0;
    for (int i = 1; i <= n; ++i) {
        s += i;
    }                                                             // sum the range 1,2,...,n
    int sum_nums = std::accumulate(nums.begin(), nums.end(), 0);  // sum nums

    return sum_nums - s;  // return the difference
}#include <iostream>
using namespace std;
int main() {
    cout<<"Hello World!";
}
