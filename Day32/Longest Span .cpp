////Longest Span in two Binary Arrays

class Solution {
public:
    int sumZero(int arr[], int n){
        int res=0,presum=0;
        unordered_map<int, int> s;
        for(int i=0;i<n;i++){
            presum += arr[i];
            if(presum==0) res=i+1;
            if(s.find(presum)!=s.end()) res = max(res,i-s[presum]);
            else s[presum]=i;
        }
        return res;
    }
    int longestCommonSum(bool arr1[], bool arr2[], int n) {
            int arr[n];
            for(int i=0;i<n;i++)
                arr[i] = arr1[i] - arr2[i];
            
            return sumZero(arr,n);
    }
};