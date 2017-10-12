class Solution {
public:
    /**
     * @param nums: a vector of integers
     * @return: return nothing (void), do not return anything, modify nums in-place instead
     */
    void nextPermutation(vector<int> &nums) {
        // write your code here
        int n = nums.size();
        if (n == 0 || n == 1)
        {
            return;
        }
        
        int i = n - 2;
        while (i >= 0 && nums[i] >= nums[i + 1])
        {
            --i;
        }
        
        if (i >= 0)
        {
            int j = n - 1;
            while (j > i && nums[j] <= nums[i])
            {
                --j;
            }
            swap(nums[i], nums[j]);
        }
        reverse(nums.begin() + i + 1, nums.end());
    }
};
