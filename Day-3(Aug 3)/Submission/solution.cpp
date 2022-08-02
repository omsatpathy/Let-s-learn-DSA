#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void nextPermutation(vector<int>& nums) {
        // Just STL things
        next_permutation(nums.begin(),nums.end());
    }
};

// Time Complexity - O(N)
// Space Complexity - O(1)

// ------------------------------------------------------------- //

// Preferred Solution to know working of algorithm

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int ind = -1;        
        // First we have to find first smaller element from right
        for(int i = n-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                ind = i;
                break;
            }
        }
        
        int greaterInd;
        if(ind != -1){    
            // find the first largest element from the right so that we can replace it with the smaller index, that we got earlier
            for(int i = n-1; i >= 0; i--){
                if(nums[i] > nums[ind]){
                    greaterInd = i;
                    break;
                }
            }      
            // swapping the ind and greaterIndex we get
            swap(nums[ind],nums[greaterInd]);
            reverse(nums.begin() + ind + 1,nums.end());
        }else{
            // if no smaller element found from right, it means that the array is in decreasing order, so the answer will be the reverse one
            reverse(nums.begin(),nums.end());
        }
    }
};

// Time Complexity - O(N + N) - N - size of array
// Space Complexity - O(1)