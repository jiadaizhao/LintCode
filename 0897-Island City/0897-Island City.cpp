class Solution {
public:
    /**
     * @param grid: an integer matrix
     * @return: an integer 
     */
    int numIslandCities(vector<vector<int>> &grid) {
        // Write your code here
        int n = grid.size();
        if (n == 0) return 0;
        int m = grid[0].size();
        int count = 0;
        vector<int> dr = {-1, 1, 0, 0};
        vector<int> dc = {0, 0, -1, 1};
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                bool hasCity = false;
                if (grid[i][j]) {
                    queue<pair<int, int>> Q;
                    Q.emplace(i, j);
                    if (grid[i][j] == 2) hasCity = true;
                    grid[i][j] = 0;
                    while (!Q.empty()) {
                        int row = Q.front().first;
                        int col = Q.front().second;
                        Q.pop();
                        for (int k = 0; k < dr.size(); ++k) {
                            int nr = row + dr[k];
                            int nc = col + dc[k];
                            if (nr >= 0 && nr < n && nc >= 0 && nc < m && grid[nr][nc]) {
                                Q.emplace(nr, nc);
                                if (grid[nr][nc] == 2) hasCity = true;
                                grid[nr][nc] = 0;
                            }
                        }
                    }
                    if (hasCity) ++count;
                }
            }
        }
        return count;
    }
};
