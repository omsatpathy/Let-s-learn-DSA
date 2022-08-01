class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row, col;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j] == 0){
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        for(auto i: row){
            for(int j=0; j<n; j++){
                matrix[i][j] = 0;
            }
        }
        for(auto j: col){
            for(int i=0; i<m; i++){
                matrix[i][j] = 0;
            }
        }
    }
};
