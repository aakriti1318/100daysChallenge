//https://binarysearch.com/room/Array-of-Sunshine-dVzd4z9crP
//Matrix Prefix Sum

vector<vector<int>> solve(vector<vector<int>>& mat) {
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            if(j!=0){
                mat[i][j] += mat[i][j-1];
            }
        }
        for(int j=0;j<mat[0].size();j++){
            if(i!=0){
                mat[i][j] += mat[i-1][j];
            }
        }
    }
    return mat;
}