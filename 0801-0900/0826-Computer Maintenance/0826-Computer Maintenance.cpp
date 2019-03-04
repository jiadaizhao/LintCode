class Solution {
public:
    /**
     * @param n: the rows of matrix
     * @param m: the cols of matrix
     * @param badcomputers: the bad computers 
     * @return: The answer
     */
    int maintenance(int n, int m, vector<Point> &badcomputers) {
        // Write your code here
        vector<vector<int>> computers(n, vector<int>(m));
        for (Point p : badcomputers) {
            computers[p.x][p.y] = 1;
        }
        
        vector<vector<int>> dp(2, vector<int>(2));
        int left = m, right = -1;
        for (int j = 0; j < m; ++j) {
            if (computers[0][j]) {
                left = min(left, j);
                right = max(right, j);
            }
        }
        if (left == m) {
            dp[0][0] = 0;
            dp[0][1] = m - 1;
        }
        else {
            dp[0][0] = right * 2;
            dp[0][1] = m - 1;
        }
        
        for (int i = 1; i < n; ++i) {
            left = m, right = -1;
            for (int j = 0; j < m; ++j) {
                if (computers[i][j]) {
                    left = min(left, j);
                    right = max(right, j);
                }
            }
            
            if (left == m) {
                dp[i & 1][0] = min(dp[(i - 1) & 1][0] + 1, dp[(i - 1) & 1][1] + m);
                dp[i & 1][1] = min(dp[(i - 1) & 1][1] + 1, dp[(i - 1) & 1][0] + m);
            }
            else {
                dp[i & 1][0] = min(dp[(i - 1) & 1][0] + 1 + right * 2, dp[(i - 1) & 1][1] + m);
                dp[i & 1][1] = min(dp[(i - 1) & 1][1] + 1 + (m - left - 1) * 2, dp[(i - 1) & 1][0] + m);
            }
        }
        
        return min(dp[(n - 1) & 1][0], dp[(n - 1) & 1][1]);
    }
};
