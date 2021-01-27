//https://binarysearch.com/room/Hash-Brown-Map-b8B8dpfsyY
//Transpose of a Matrix

vector<vector<int>> solve(vector<vector<int>>& matrix) {
    for(int i=0;i<matrix.size();i++){
        for(int j=i+1;j<matrix[i].size();j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    return matrix;
}