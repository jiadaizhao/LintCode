class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: An integer indicate the value of maximum difference between two
     *          Subarrays
     */
    int maxDiffSubArrays(vector<int> nums) {
        // write your code here
        int n = nums.size();
        vector<int> leftMax(n), rightMax(n), leftMin(n), rightMin(n);
        
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
        for (int i = n - 1; i >= 0; --i)
        {
            sum += nums[i];
            maxSum = max(maxSum, sum);
            rightMax[i] = maxSum;
            if (sum < 0)
            {
                sum = 0;
            }
        }
        
        int minSum = INT_MAX;
        sum = 0;
        for (int i = 0; i < n; ++i)
        {
            sum += nums[i];
            minSum = min(minSum, sum);
            leftMin[i] = minSum;
            if (sum > 0)
            {
                sum = 0;
            }
        }
        
        minSum = INT_MAX;
        sum = 0;
        for (int i = n - 1; i >= 0; --i)
        {
            sum += nums[i];
            minSum = min(minSum, sum);
            rightMin[i] = minSum;
            if (sum > 0)
            {
                sum = 0;
            }
        }
        
        int result = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            result = max(result, abs(leftMax[i] - rightMin[i + 1]));
            result = max(result, abs(leftMin[i] - rightMax[i + 1]));
        }
        
        return result;
    }
};
