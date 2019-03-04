class Solution {
public:
    /**
     * @param A an integer array
     * @param V an integer array
     * @param m an integer
     * @return an array
     */
    int backPackIII(vector<int>& A, vector<int>& V, int m) {
        // Write your code here
        int n = A.size();
        vector<int> dp(1 + m);

        for (int i = 0; i < n; ++i)
        {
            for (int j = A[i]; j <= m; ++j)
            {
                dp[j] = max(dp[j], dp[j - A[i]] + V[i]);
            }
        }
        
        return dp[m];
    }
};
