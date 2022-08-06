#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0, one = 0, two = 0;
        // the intuition is that, as we have given only 3 integers, so, we can store it's count in 3 variable, then simply place it in correct position
        for(auto x: nums){
            if(x == 0){
                zero++;
            }else if(x == 1){
                one++;
            }else{
                two++;
            }
        }
        int i = 0;
        while(zero--){
            nums[i++] = 0;
        }
        while(one--){
            nums[i++] = 1;
        }
        while(two--){
            nums[i++] = 2;
        }
    }
};

// Time Complexity - O(N + N) => O(N)
// Space Complexity - O(3) => O(1)