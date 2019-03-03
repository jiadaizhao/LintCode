class Solution {
public:
    /**
     * @param nums an array of integers
     * @param k an integer
     * @return the largest sum
     */
    int maxSubarray4(vector<int>& nums, int k) {
        // Write your code here
        if (nums.size() < k) {
            return 0;
        }
        
        int sum = 0;
        for (int i = 0; i < k; ++i) {
            sum += nums[i];
        }
        int maxSum = sum;
        int presum = 0;
        int premin = 0;
        for (int i = k; i < nums.size(); ++i) {
            sum += nums[i];
            presum += nums[i - k];
            premin = min(premin, presum);
            maxSum = max(maxSum, sum - premin);
        }
        
        return maxSum;
    }
};
