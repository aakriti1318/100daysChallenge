//https://leetcode.com/problems/remove-element/
//Remove Element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                swap(nums[i],nums[count]);
                count++;
            }
        }
        return count;
    }
};#include <iostream>
using namespace std;
int main() {
    cout<<"Hello World!";
}
