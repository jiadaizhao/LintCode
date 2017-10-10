class Solution {
public:
    /**
     * @param obstacleGrid: A list of lists of integers
     * @return: An integer
     */ 
    int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
        // write your code here
        int m = obstacleGrid.size();
        if (m == 0) {
            return 0;
        }
        
        int n = obstacleGrid[0].size();
        
        vector<int> dp(n);
        for (int j = 0; j < n; ++j) {
            if (obstacleGrid[0][j] == 1) {
                break;
            }
            else {
                dp[j] = 1;
            }
        }
        
        for (int i = 1; i < m; ++i) {
            if (obstacleGrid[i][0] == 1) {
                dp[0] = 0;
            }
            
            for (int j = 1; j < n; ++j) {
                if (obstacleGrid[i][j] == 0) {
                    dp[j] += dp[j - 1];
                }
                else {
                    dp[j] = 0;
                }
            }
        }
        
        return dp[n - 1];
    }
};
