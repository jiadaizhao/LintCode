class Solution {
public:
    /**
     * @param A an integer matrix
     * @return  an integer
     */
    int longestIncreasingContinuousSubsequenceII(vector<vector<int>>& A) {
        // Write your code here
        int n = A.size();
        if (n == 0)
        {
            return 0;
        }
        int m = A[0].size();
        
        vector<vector<int>> dp(n, vector<int>(m));
        int maxLen = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                maxLen = max(maxLen, search(A, i, j, dp));
            }
        }

        return maxLen;
    }
    
private:
    int search(vector<vector<int>>& A, int i, int j, vector<vector<int>>& dp)
    {
        if (dp[i][j])
        {
            return dp[i][j];
        }
        
        dp[i][j] = 1;
        vector<int> dx = {-1, 1, 0, 0};
        vector<int> dy = {0, 0, -1, 1};
        for (int k = 0; k < dx.size(); ++k)
        {
            int x = i + dx[k];
            int y = j + dy[k];
            if (x >= 0 && x < A.size() && y >= 0 && y < A[i].size() && A[x][y] > A[i][j])
            {
                dp[i][j] = max(dp[i][j], 1 + search(A, x, y, dp));
            }
        }
        
        return dp[i][j];
    }
};
