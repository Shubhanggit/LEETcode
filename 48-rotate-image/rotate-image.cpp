class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        for(int i=0; i<r;i++){
            for(int j=i;j<c;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0;i<c/2;i++){
            for(int j=0;j<r;j++){
                swap(matrix[j][i], matrix[j][c-i-1]);
            }
        }
    }
};