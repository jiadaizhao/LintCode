class Solution {
public:
    /**
     * @param matrix: the given matrix
     * @return: The list of grid coordinates
     */
    vector<vector<int>> pacificAtlantic(vector<vector<int>> &matrix) {
        // write your code here
        int m = matrix.size();
        if (m == 0) {
            return {};
        }
        int n = matrix[0].size();
        vector<vector<int>> visitedTimes(m, vector<int>(n));
        bfs(matrix, visitedTimes, true);
        bfs(matrix, visitedTimes, false);
        vector<vector<int>> result;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (visitedTimes[i][j] == 2) {
                    result.push_back({i, j});
                }
            }
        }
        return result;
    }
    
private:
    void bfs(vector<vector<int>>& matrix, vector<vector<int>>& visitedTimes, bool pacific) {
        int m = matrix.size();
        int n = matrix[0].size();
        queue<pair<int, int>> Q;
        vector<vector<bool>> visited(m, vector<bool>(n));
        if (pacific) {
            for (int j = 0; j < n; ++j) {
                Q.emplace(0, j);
                visited[0][j] = true;
                ++visitedTimes[0][j];
            }
            for (int i = 1; i < m; ++i) {
                Q.emplace(i, 0);
                visited[i][0] = true;
                ++visitedTimes[i][0];
            }
        }
        else {
            for (int i = 0; i < m; ++i) {
                Q.emplace(i, n - 1);
                visited[i][n - 1] = true;
                ++visitedTimes[i][n - 1];
            }
            for (int j = 0; j < n - 1; ++j) {
                Q.emplace(m - 1, j);
                visited[m - 1][j] = true;
                ++visitedTimes[m - 1][j];
            }
        }
        
        vector<int> dr = {-1, 1, 0, 0};
        vector<int> dc = {0, 0, -1, 1};
        while (!Q.empty()) {
            int r = Q.front().first;
            int c = Q.front().second;
            Q.pop();
            for (int k = 0; k < dr.size(); ++k) {
                int nr = r + dr[k];
                int nc = c + dc[k];
                if (nr >= 0 && nr < m && nc >= 0 && nc < n && !visited[nr][nc] && matrix[nr][nc] >= matrix[r][c]) {
                    Q.emplace(nr, nc);
                    visited[nr][nc] = true;
                    ++visitedTimes[nr][nc];
                }
            }
        }
    }
};
