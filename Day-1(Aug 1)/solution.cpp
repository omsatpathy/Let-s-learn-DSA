#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        int col = 0;
        for(int i = 0; i < n; i++){
            // check if first column contains 0 or not
           if(matrix[i][0] == 0){
               col = 1;
           }            
            // take 0th row and 0th column as indicator for zero mark corresponding column and row to 0
           for(int j = 1; j < m; j++){
               if(matrix[i][j] == 0){
                   matrix[i][0] = matrix[0][j] = 0;
               }
           }            
        }        
         
        for(int i = n-1; i >= 0; i--){
            // if any row or column contains the 0 simply we can put that index value to zero
            for(int j = m-1; j >= 1; j--){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }    
            // for the first column of every row 
            if(col == 1){
                matrix[i][0] = 0;
            }
        }           
    }
};