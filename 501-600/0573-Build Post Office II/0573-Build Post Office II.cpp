class Solution {
public:
    /**
     * @param grid a 2D grid
     * @return an integer
     */
    int shortestDistance(vector<vector<int>>& grid) {
        // Write your code here
        int m = grid.size();
        if (m == 0) {
            return -1;
        }
        
        int n = grid[0].size();
        vector<vector<int>> visitedTimes(m, vector<int>(n));
        vector<vector<int>> minDistance(m, vector<int>(n));
        int numHouse = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 1) {
                    ++numHouse;
                    bfs(grid, i, j, visitedTimes, minDistance);
                }
            }
        }
        
        int minDist = -1;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 0 && visitedTimes[i][j] == numHouse) {
                    if (minDist == -1 || minDistance[i][j] < minDist) {
                        minDist = minDistance[i][j];
                    }
                }
            }
        }
        
        return minDist;
    }
private:
    void bfs(vector<vector<int>>& grid, int i, int j, 
             vector<vector<int>>& visitedTimes, vector<vector<int>>& minDistance) {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int, int>> Q;
        vector<vector<bool>> visited(m, vector<bool>(n));
        Q.emplace(i, j);
        visited[i][j] = true;
        vector<int> deltaX = {-1, 1, 0, 0};
        vector<int> deltaY = {0, 0, -1, 1};
        int step = 0;
        
        while (!Q.empty()) {
            int qs = Q.size();
            ++step;
            for (int q = 0; q < qs; ++q) {
                int x = Q.front().first;
                int y = Q.front().second;
                Q.pop();
                for (int k = 0; k < 4; ++k) {
                    int r = x + deltaX[k];
                    int c = y + deltaY[k];
                    if (r >= 0 && r < m && c >= 0 && c < n && !visited[r][c] && grid[r][c] == 0) {
                        ++visitedTimes[r][c];
                        minDistance[r][c] += step;
                        Q.emplace(r, c);
                        visited[r][c] = true;
                    }
                }
            }
        }
    }
};
