class Solution {
public:
    void recoverRotatedSortedArray(vector<int> &nums) {
        // write your code here
        if (nums.size() == 0)
        {
            return;
        }
        
        for (int i = 0; i < nums.size() - 1; ++i)
        {
            if (nums[i] > nums[i + 1])
            {
                reverse(nums.begin(), nums.begin() + i + 1);
                reverse(nums.begin() + i + 1, nums.end());
                reverse(nums.begin(), nums.end());
                return;
            }
        }
    }
};
