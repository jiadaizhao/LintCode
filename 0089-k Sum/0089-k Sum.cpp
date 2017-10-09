class Solution {
public:
    /**
     * @param A: an integer array.
     * @param k: a positive integer (k <= length(A))
     * @param target: a integer
     * @return an integer
     */
    int kSum(vector<int> A, int k, int target) {
        // wirte your code here
        int n = A.size();
        vector<vector<int>> dp(1 + k, vector<int>(1 + target));
        dp[0][0] = 1;

        for (int i = 0; i < n; ++i)
        {
            for (int j = k; j >= 1; --j)
            {
                for (int t = target; t >= A[i]; --t)
                {
                    dp[j][t] += dp[j - 1][t - A[i]];
                }
            }
        }
        
        return dp[k][target];
    }
};
