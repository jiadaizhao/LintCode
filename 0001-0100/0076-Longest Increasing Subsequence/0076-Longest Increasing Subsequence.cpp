class Solution {
public:
    /**
     * @param nums: The integer array
     * @return: The length of LIS (longest increasing subsequence)
     */
    int longestIncreasingSubsequence(vector<int> nums) {
        // write your code here
        int n = nums.size();
        if (n == 0)
        {
            return 0;
        }
        vector<int> dp(n, 1);
        int maxLen = 1;
        for (int j = 1; j < n; ++j)
        {
            for (int i = 0; i < j; ++i)
            {
                if (nums[j] > nums[i] && dp[j] < dp[i] + 1)
                {
                    dp[j] = dp[i] + 1;
                    if (dp[j] > maxLen)
                    {
                        maxLen = dp[j];
                    }
                }
            }
        }
        
        return maxLen;
    }
};
