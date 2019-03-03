class Solution {
public:
    /**
     * @param nums an integer array
     * @param target an integer
     * @return the difference between the sum and the target
     */
    int twoSumClosest(vector<int>& nums, int target) {
        // Write your code here
        if (nums.size() == 0)
        {
            return target;
        }
        sort(nums.begin(), nums.end());
        int minDiff = INT_MAX;
        int start = 0, end = nums.size() - 1;
        while (start < end)
        {
            int sum = nums[start] + nums[end];
            if (sum == target)
            {
                return 0;
            }
            else if (sum < target)
            {
                minDiff = min(minDiff, target - sum);
                ++start;
            }
            else
            {
                minDiff = min(minDiff, sum - target);
                --end;
            }
        }
        
        return minDiff;
    }
};
