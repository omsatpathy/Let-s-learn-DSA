#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN,sum = 0;
        int i = 0, j = 0;
        while(j < n){
            sum += nums[j];
            // store the maximum sum
            maxi = max(maxi, sum);
            // if sum gets negetive we have to make sum as possitive or minimum negetive value, simultaneously update the maximum value
            if(sum < 0){
                while(i <= j and sum < 0){
                    maxi = max(maxi, sum);
                    sum -= nums[i];
                    i++;
                }
            }
            j++;
        }
        return maxi;
    }
};

// Time Complexity - O(N) - N - length of the array
// Auxiliary Space - O(1) 