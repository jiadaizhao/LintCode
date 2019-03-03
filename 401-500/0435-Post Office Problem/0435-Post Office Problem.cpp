class Solution {
public:
    /**
     * @param A an integer array
     * @param k an integer
     * @return an integer
     */
    int postOffice(vector<int>& A, int k) {
        // Write your code here
        int n = A.size();
        if (n == 0 || k >= n)
        {
            return 0;
        }
        
        sort(A.begin(), A.end());
        vector<vector<int>> dist(1 + n, vector<int>(1 + n));
        for (int i = 1; i <= n; ++i)
        {
            for (int j = i + 1; j <= n; ++j)
            {
                int mid = (i + j) / 2;
                for (int l = i; l <= j; ++l)
                {
                    dist[i][j] += abs(A[mid - 1] - A[l - 1]);
                }
            }
        }
        
        vector<vector<int>> dp(1 + k, vector<int>(1 + n));
        for (int j = 1; j <= n; ++j)
        {
            dp[1][j] = dist[1][j];
        }
        
        for (int l = 2; l <= k; ++l)
        {
            for (int j = l + 1; j <= n; ++j)
            {
                dp[l][j] = INT_MAX;
                for (int i = 1; i < j; ++i)
                {
                    dp[l][j] = min(dp[l][j], dp[l - 1][i] + dist[i + 1][j]);
                }
            }
        }

        return dp[k][n];
        
    }
};
