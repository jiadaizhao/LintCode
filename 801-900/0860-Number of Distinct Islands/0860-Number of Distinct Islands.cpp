class Solution {
public:
    /**
     * @param grid: a list of lists of integers
     * @return: return an integer, denote the number of distinct islands
     */
    int numberofDistinctIslands(vector<vector<int>> &grid) {
        // write your code here
        int m = grid.size();
        if (m == 0) {
            return 0;
        }
        
        int n = grid[0].size();
        set<vector<int>> table;
        int dr[4] = {-1, 1, 0, 0};
        int dc[4] = {0, 0, -1, 1};
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 1) {
                    vector<int> path;
                    queue<pair<int, int>> Q;
                    Q.emplace(i, j);
                    grid[i][j] = 0;
                    while (!Q.empty()) {
                        auto p = Q.front();
                        int r = p.first;
                        int c = p.second;
                        Q.pop();
                        for (int k = 0; k < 4; ++k) {
                            int nr = r + dr[k];
                            int nc = c + dc[k];
                            if (nr >= 0 && nr < m && nc >= 0 && nc < n && grid[nr][nc] == 1) {
                                Q.emplace(nr, nc);
                                grid[nr][nc] = 0;
                                path.push_back(k + 1);                                
                            }
                        }
                        path.push_back(0);
                    }
                    table.insert(path);
                }
            }
        }
        
        return table.size();
    }
};
