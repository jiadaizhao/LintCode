class Solution {
public:
    /*
     * @param grid: Given a 2D grid, each cell is either 'W', 'E' or '0'
     * @return: an integer, the maximum enemies you can kill using one bomb
     */
    int maxKilledEnemies(vector<vector<char>> &grid) {
        // write your code here
        int m = grid.size();
        if (m == 0) {
            return 0;
        }
        
        int n = grid[0].size();
        int maxNum = 0;
        int rowHits = 0;
        vector<int> colHits(n);
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (j == 0 || grid[i][j - 1] == 'W') {
                    rowHits = 0;
                    for (int k = j; k < n && grid[i][k] != 'W'; ++k) {
                        if (grid[i][k] == 'E') {
                            ++rowHits;
                        }
                    }
                }
                
                if (i == 0 || grid[i - 1][j] == 'W') {
                    colHits[j] = 0;
                    for (int k = i; k < m && grid[k][j] != 'W'; ++k) {
                        if (grid[k][j] == 'E') {
                            ++colHits[j];
                        }
                    }
                }
                
                if (grid[i][j] == '0') {
                    maxNum = max(maxNum, rowHits + colHits[j]);
                }
            }
        }
        
        return maxNum;
    }
};
