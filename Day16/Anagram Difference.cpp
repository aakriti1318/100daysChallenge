//https://binarysearch.com/room/Hash-Table-enbLCVHWLZ
//Anagram Difference

void leftRotatebyOne(string s0, int n) { 
    char temp = s0[0]; 
    int i;
    for(i = 0; i < n - 1; i++) 
        s0[i] = s0[i + 1]; 
  
    s0[i] = temp; 
    
} 
void leftRotate(string s, int d, int n) { 
    for (int i = 0; i < d; i++) 
        leftRotatebyOne(s, n); 
} 
  

int solve(string s0, string s1) {
    int d = 1,ans;
    if(leftRotate(s0,d,s0.size()) == s1){
        ans = d;
        break;
    }
    else{
        d++;
        leftRotate(s0,d,s0.size();
    }
    return ans;
}