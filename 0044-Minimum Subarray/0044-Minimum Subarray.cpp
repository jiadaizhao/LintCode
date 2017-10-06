class Solution {
public:
    /**
     * @param nums: a list of integers
     * @return: A integer denote the sum of minimum subarray
     */
    int minSubArray(vector<int> nums) {
        // write your code here
        int n = nums.size();
        if (n == 0)
        {
            return 0;
        }
        
        int minSum = nums[0];
        int sum = nums[0];
        for (int i = 1; i < n; ++i)
        {
            if (sum > 0)
            {
                sum = nums[i];
            }
            else
            {
                sum += nums[i];
            }
            minSum = min(minSum, sum);
        }
        
        return minSum;
    }
};
