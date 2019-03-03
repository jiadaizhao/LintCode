class Solution {
public:
    /*
     * @param : a 2d boolean array
     * @param : an integer
     * @return: the number of Islands
     */
    int numsofIsland(vector<vector<bool>> grid, int k) {
        // Write your code here
        int m = grid.size();
        if (m == 0) {
            return 0;
        }
        
        int n = grid[0].size();
        int count = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] && bfs(grid, i, j, k)) {
                    ++count;
                }
            }
        }
        
        return count;
    }
    
private:
    bool bfs(vector<vector<bool>> &grid, int r, int c, int k) {
        int count = 1;
        queue<pair<int, int>> Q;
        Q.emplace(r, c);
        grid[r][c] = false;
        vector<int> dr = {-1, 1, 0, 0};
        vector<int> dc = {0, 0, -1, 1};
        int m = grid.size();
        int n = grid[0].size();
        while (!Q.empty()) {
            int row = Q.front().first;
            int col = Q.front().second;
            Q.pop();
            for (int i = 0; i < dr.size(); ++i) {
                int nr = row + dr[i];
                int nc = col + dc[i];
                if (nr >= 0 && nr < m && nc >= 0 && nc < n && grid[nr][nc]) {
                    ++count;
                    Q.emplace(nr, nc);
                    grid[nr][nc] = false;
                }
            }
        }
        return count >= k;
    }
};
