class Solution {
public:
    /**
     * @param grid a chessboard included 0 and 1
     * @return the shortest path
     */
    int shortestPath2(vector<vector<bool>>& grid) {
        // Write your code here
        int n = grid.size();
        if (n == 0) {
            return -1;
        }
        
        int m = grid[0].size();
        if (n == 1 && m == 1) {
            return 0;
        }
        
        if (grid[n - 1][m - 1] == true) {
            return -1;
        }
        
        vector<vector<int>> dp(n, vector<int>(m, -1));
        dp[0][0] = 0;
        if (n >= 3 && m >= 2 && grid[2][1] != 1) {
            dp[2][1] = 1;
        }
        vector<int> dx = {-1, 1, -2, 2};
        vector<int> dy = {-2, -2, -1, -1};
        for (int j = 2; j < m; ++j) {
            for (int i = 0; i < n; ++i) {
                if (grid[i][j] == true) {
                    continue;
                }
                
                for (int k = 0; k < dx.size(); ++k) {
                    int x = i + dx[k];
                    int y = j + dy[k];
                    if (x >= 0 && x < n && dp[x][y] != -1) {
                        if (dp[i][j] == -1){
                            dp[i][j] = 1 + dp[x][y];
                        }
                        else {
                            dp[i][j] = min(dp[i][j], 1 + dp[x][y]);
                        }
                    }
                }
            }
        }
        
        return dp[n - 1][m - 1];
    }
};
