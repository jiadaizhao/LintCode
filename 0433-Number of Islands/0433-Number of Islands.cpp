class Solution {
public:
    /**
     * @param grid a boolean 2D matrix
     * @return an integer
     */
    int numIslands(vector<vector<bool>>& grid) {
        // Write your code here
        int m = grid.size();
        if (m == 0)
        {
            return 0;
        }
        
        int n = grid[0].size();
        queue<pair<int, int>> Q;
        int count = 0;
        vector<int> deltaX = {-1, 1, 0, 0};
        vector<int> deltaY = {0, 0, -1, 1};
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (grid[i][j])
                {
                    ++count;
                    Q.push({i, j});
                    grid[i][j] = false;
                    while(!Q.empty())
                    {
                        int row = Q.front().first;
                        int col = Q.front().second;
                        Q.pop();
                        for (int k = 0; k < deltaX.size(); ++k)
                        {
                            int r = row + deltaX[k];
                            int c = col + deltaY[k];
                            if (r >= 0 && r < m && c >= 0 && c < n && grid[r][c])
                            {
                                Q.push({r, c});
                                grid[r][c] = false;
                            }
                        }                       
                    }
                }
            }
        }
        
        return count;
    }
};
