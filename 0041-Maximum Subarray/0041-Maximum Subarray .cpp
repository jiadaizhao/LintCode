class Solution {
public:    
    /**
     * @param nums: A list of integers
     * @return: A integer indicate the sum of max subarray
     */
    int maxSubArray(vector<int> nums) {
        // write your code here
        int sum = nums[0];
        int maxSum = nums[0];
        for (int i = 1; i < nums.size(); ++i)
        {
            if (sum < 0)
            {
                sum = nums[i];
            }
            else
            {
                sum += nums[i];
            }
            maxSum = max(maxSum, sum);
        }
        
        return maxSum;
    }
};
