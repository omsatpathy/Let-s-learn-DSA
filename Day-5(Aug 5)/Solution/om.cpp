class Solution {
public:
    void sortColors(vector<int>& nums) {
    
    int size = nums.size();
    int arr[3] = {0};

    for(int i=0;i<size;i++) {
        arr[nums[i]]++;
    }

    int x=-1;

    for(int i=0;i<arr[0];i++)
        nums[++x] = 0;

    for(int i=0;i<arr[1];i++)
        nums[++x] = 1;

    for(int i=0;i<arr[2];i++)
        nums[++x] = 2;
        
    }
};
