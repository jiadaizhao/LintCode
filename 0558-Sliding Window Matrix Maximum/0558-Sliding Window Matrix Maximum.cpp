class Solution {
public:
    /**
     * @param matrix an integer array of n * m matrix
     * @param k an integer
     * @return the maximum number
     */
    int maxSlidingMatrix(vector<vector<int>>& matrix, int k) {
        // Write your code here
        int n = matrix.size();
        if (n == 0) {
            return 0;
        }
        int m = matrix[0].size();
        if (n < k || m < k) {
            return 0;
        }
        
        vector<vector<int>> sum(1 + n, vector<int>(1 + m));
        int maxSum = INT_MIN;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                sum[i][j] = matrix[i - 1][j - 1] + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
                if (i >= k && j >= k) {
                    maxSum = max(maxSum, sum[i][j] - sum[i - k][j] - sum[i][j - k] + sum[i - k][j - k]);
                }
            }
        }
        
        return maxSum;
    }
};
