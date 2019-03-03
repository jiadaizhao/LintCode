class Solution {
public:
    /**
     * @param nums an integer array and all positive numbers, no duplicates
     * @param target an integer
     * @return an integer
     */
    int backPackVI(vector<int>& nums, int target) {
        // Write your code here
        int n = nums.size();
        vector<int> dp(1 + target);
        dp[0] = 1;
        
        for (int i = 1; i <= target; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i >= nums[j]) {
                    dp[i] += dp[i - nums[j]];
                }
            }
        }
        
        return dp[target];
    }
};
