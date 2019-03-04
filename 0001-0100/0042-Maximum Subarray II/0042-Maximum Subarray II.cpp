class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: An integer denotes the sum of max two non-overlapping subarrays
     */
    int maxTwoSubArrays(vector<int> nums) {
        // write your code here
        int n = nums.size();
        vector<int> leftMax(n), rightMax(n);
        
        int maxSum = INT_MIN, sum = 0;
        for (int i = 0; i < n; ++i)
        {
            sum += nums[i];
            maxSum = max(maxSum, sum);
            leftMax[i] = maxSum;
            if (sum < 0)
            {
                sum = 0;
            }
        }
        
        maxSum = INT_MIN;
        sum = 0;
        for (int i = n - 1; i > 0; --i)
        {
            sum += nums[i];
            maxSum = max(maxSum, sum);
            rightMax[i - 1] = maxSum;
            if (sum < 0)
            {
                sum = 0;
            }
        }
        
        int result = INT_MIN;
        for (int i = 0; i < n - 1; ++i)
        {
            result = max(result, leftMax[i] + rightMax[i]);
        }
        
        return result;
    }
};
