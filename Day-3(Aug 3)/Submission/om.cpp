class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int size = nums.size();
         int x = -1;
         for(int i=0;i<size-1;i++){
            if(nums[i] < nums[i+1]) 
                x = i;
         }

         if(x == -1)
         {
            reverse(nums.begin() , nums.end());
            return;
         }

        int y = -1;
        for(int i=0;i<size;i++) {
            if(nums[x] < nums[i])
                y=i;
        }

        int dummy = nums[x];
        nums[x]=nums[y];
        nums[y]=dummy;

        vector<int> temp;
        for(int i=x+1;i<size;i++){
            temp.push_back(nums[i]);
        }
        reverse(temp.begin() , temp.end());

        int j=0;
        for(int i=x+1;i<size;i++) {
            nums[i] = temp[j++];
        }
    }
};
