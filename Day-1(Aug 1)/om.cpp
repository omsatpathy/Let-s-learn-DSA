class Solution {
public:
    void setZeroes(vector<vector<int>>& nums) {
        int col0 = 1;
        int row = nums.size();
        int col = nums[0].size();

        for(int i=0;i<row;i++) {
            if(nums[i][0] == 0)
                col0 = 0;
            for(int j=1;j<col;j++) {
                if(nums[i][j] == 0) {
                    nums[i][0] = nums[0][j] = 0;
                }
            }
        }

        for(int i=row-1;i>=0;i--) {
            for(int j=col-1;j>=1;j--) {
                if(nums[i][0] == 0 || nums[0][j] == 0)
                    nums[i][j] = 0;
            }
            if(col0 == 0)
                nums[i][0] = 0;
        }
    }
};
