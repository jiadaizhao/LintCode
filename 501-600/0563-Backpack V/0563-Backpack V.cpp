class Solution {
public:
    /**
     * @param nums an integer array and all positive numbers
     * @param target an integer
     * @return an integer
     */
    int backPackV(vector<int>& nums, int target) {
        // Write your code here
        int n = nums.size();
        vector<int> dp(1 + target);
        dp[0] = 1;

        for (int i = 0; i < n; ++i) {
            for (int j = target; j >= nums[i]; --j) {
                dp[j] += dp[j - nums[i]];
            }
        }
        
        return dp[target];
    }
};
