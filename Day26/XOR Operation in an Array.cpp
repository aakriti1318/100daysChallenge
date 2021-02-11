//https://leetcode.com/problems/xor-operation-in-an-array/
//XOR Operation in an Array
class Solution {
public:
    int xorOperation(int n, int start) {
        int arr[n];
        arr[0] = start;
        int ans = arr[0];
        if(n == 1) return start;
        else{
            for(int i=1;i<n;i++){
                arr[i] = start + 2*i;
                ans = ans ^ arr[i];
            }   
            return ans;
        }
    }
};