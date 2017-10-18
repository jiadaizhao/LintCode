class Solution {
public:
    /**
     * @param nums: an array of integer
     * @param target: an integer
     * @return: an integer
     */
    int twoSum2(vector<int> &nums, int target) {
        // Write your code here
        int count = 0;
        if (nums.size() == 0)
        {
            return count;
        }
        
        sort(nums.begin(), nums.end());
        int start = 0, end = nums.size() - 1;
        while (start < end)
        {
            if (nums[start] + nums[end] <= target)
            {
                ++start;
            }
            else
            {
                count += end - start;
                --end;
            }
        }
        
        return count;
    }
};
