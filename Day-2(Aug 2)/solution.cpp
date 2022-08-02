#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> dp(numRows+1,vector<int>(numRows+1));
        vector<vector<int>> ans;
        ans.push_back({1});
        // base case when numRows is 1
        dp[0][0] = 1;
        for(int i = 1; i < numRows; i++){
            vector<int> v;
            // iterate through all the index and update the value              
            for(int j = 0; j <= i; j++){
                // As we can see in the animation, the value of required index depends on previous row's j and j-1 index 
                dp[i][j] = dp[i-1][j] + ((j - 1 >= 0)? dp[i-1][j-1]:0); 
                v.push_back(dp[i][j]);
            }
            ans.push_back(v);
        }
        return ans;
    }
};

// Time Complexity - O(N*N) - N - number of rows
// Auxiliary Space - O(N*N) - N - number of rows