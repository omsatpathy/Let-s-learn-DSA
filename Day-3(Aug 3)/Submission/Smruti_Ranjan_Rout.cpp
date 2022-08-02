class Solution
{
public:
    int getIdx(vector<int> &nums, int i, int n)
    {
        for (int j = i + 1; j < n; j++)
            if (nums[j] <= nums[i])
                return j - 1;
        return n - 1;
    }
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size();
        bool ok = true;
        // Basically the idea is to find the first smaller element compare to its right
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] >= nums[i + 1])
                continue;
            else
            {
                ok = false;
                // GetIdx func gives the index of the upper_bound element in range (i+1) to (n-1).
                int idx = getIdx(nums, i, n);
                // Swap for putting the suitable(upper_bound) element at i position
                swap(nums[i], nums[idx]);
                // Then reverse it for lexicographically smaller element
                reverse(nums.begin() + i + 1, nums.end());
                break;
            }
        }
        // This case is for handling the non-increasing sequence.
        if (ok)
            reverse(nums.begin(), nums.end());
    }
};