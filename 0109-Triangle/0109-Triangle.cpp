class Solution {
public:
    /**
     * @param triangle: a list of lists of integers.
     * @return: An integer, minimum path sum.
     */
    int minimumTotal(vector<vector<int> > &triangle) {
        // write your code here
        int n = triangle.size();
        if (n == 0)
        {
            return 0;
        }
        
        for (int i = 1; i < n; ++i)
        {
            for (int j = 0; j < i + 1; ++j)
            {
                if (j == 0)
                {
                    triangle[i][j] += triangle[i - 1][j];
                }
                else if (j == i)
                {
                    triangle[i][j] += triangle[i - 1][j - 1];
                }
                else
                {
                    triangle[i][j] += min(triangle[i - 1][j - 1], triangle[i - 1][j]);
                }
            }
        }
        
        int minSum = triangle[n - 1][0];
        for (int i = 1; i < n; ++i)
        {
            minSum = min(minSum, triangle[n - 1][i]);
        }
        
        return minSum;
    }
};

class Solution {
public:
    /*
     * @param triangle: a list of lists of integers
     * @return: An integer, minimum path sum
     */
    int minimumTotal(vector<vector<int>> &triangle) {
        // write your code here
        int n = triangle.size();
        if (n == 0) {
            return 0;
        }
        
        vector<vector<int>> dp(2, vector<int>(n));
        dp[0][0] = triangle[0][0];
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i + 1; ++j) {
                if (j == 0) {
                    dp[i % 2][j] = triangle[i][j] + dp[(i - 1) % 2][j];
                }
                else if (j == i) {
                    dp[i % 2][j] = triangle[i][j] + dp[(i - 1) % 2][j - 1];
                }
                else {
                    dp[i % 2][j] = triangle[i][j] + min(dp[(i - 1) % 2][j], dp[(i - 1) % 2][j - 1]);
                }
            }
        }
        
        int minSum = dp[(n - 1) % 2][0];
        for (int i = 1; i < n; ++i)
        {
            minSum = min(minSum, dp[(n - 1) % 2][i]);
        }
        
        return minSum;
    }
};
