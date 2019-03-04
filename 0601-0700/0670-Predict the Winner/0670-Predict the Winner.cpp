class Solution {
public:
    /**
     * @param nums: nums an array of scores
     * @return: check if player 1 will win
     */
    bool PredictTheWinner(vector<int> &nums) {
        // write your code here
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n));
        for (int i = 0; i < n; ++i)
            dp[i][i] = nums[i];
        for (int i = 0; i < n - 1; ++i) {
            dp[i][i + 1] = max(nums[i], nums[i + 1]);
        }
        for (int l = 3; l <= n; ++l) {
            for (int i = 0; i < n - l + 1; ++i) {
                int j = i + l - 1;
                dp[i][j] = max(nums[i] + min(dp[i + 2][j], dp[i + 1][j - 1]), nums[j] + min(dp[i][j - 2], dp[i + 1][j - 1]));
            }
        }
        int sum = accumulate(nums.begin(), nums.end(), 0);
        return dp[0][n - 1] >= sum - dp[0][n - 1];
    }
};
