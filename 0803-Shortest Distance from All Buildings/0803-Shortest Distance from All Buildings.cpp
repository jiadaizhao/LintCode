class Solution {
public:
    /**
     * @param grid: the 2D grid
     * @return: the shortest distance
     */
    int shortestDistance(vector<vector<int>> &grid) {
        // write your code here
        int m = grid.size();
        if (m == 0) {
            return -1;
        }
        int n = grid[0].size();
        int count = 0;
        vector<vector<int>> visitedTimes(m, vector<int>(n));
        vector<vector<int>> distance(m, vector<int>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 1) {
                    ++count;
                    bfs(grid, i, j, visitedTimes, distance);
                }
            }
        }
        
        int minDist = -1;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (visitedTimes[i][j] == count && (minDist == -1 || distance[i][j] < minDist)) {
                    minDist = distance[i][j];
                }
            }
        }
        return minDist;
    }
    
private:
    void bfs(vector<vector<int>>& grid, int row, int col, vector<vector<int>>& visitedTimes, vector<vector<int>>& distance) {
        int m = grid.size();
        int n = grid[0].size();
        int dr[4] = {-1, 1, 0, 0};
        int dc[4] = {0, 0, -1, 1};
        queue<pair<int, int>> Q;
        vector<vector<bool>> visited(m, vector<bool>(n));
        Q.emplace(row, col);
        visited[row][col] = true;
        int dist = 0;
        while (!Q.empty()) {
            ++dist;
            int qs = Q.size();
            for (int i = 0; i < qs; ++i) {
                int r = Q.front().first;
                int c = Q.front().second;
                Q.pop();
                for (int k = 0; k < 4; ++k) {
                    int nr = r + dr[k];
                    int nc = c + dc[k];
                    if (nr >= 0 && nr < m && nc >= 0 && nc < n && grid[nr][nc] == 0 && !visited[nr][nc]) {
                        Q.emplace(nr, nc);
                        visited[nr][nc] = true;
                        ++visitedTimes[nr][nc];
                        distance[nr][nc] += dist;
                    }
                }
            }            
        }
    }
};
