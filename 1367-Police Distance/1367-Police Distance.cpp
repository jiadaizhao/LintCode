class Solution {
public:
    /**
     * @param matrix : the martix
     * @return: the distance of grid to the police
     */
    vector<vector<int>> policeDistance(vector<vector<int>> &matrix ) {
        // Write your code here
        int n = matrix.size();
        if (n == 0) {
            return matrix;
        }
        int m = matrix[0].size();
        vector<vector<int>> distance(n, vector<int>(m, -1));
        queue<pair<int, int>> Q;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (matrix[i][j] == 1) {
                    distance[i][j] = 0;
                    Q.emplace(i, j);
                }
            }
        }
        
        int dr[4] = {-1, 1, 0, 0};
        int dc[4] = {0, 0, -1, 1};
        while (!Q.empty()) {
            int row = Q.front().first;
            int col = Q.front().second;
            Q.pop();
            for (int k = 0; k < 4; ++k) {
                int nr = row + dr[k];
                int nc = col + dc[k];
                if (nr >= 0 && nr < n && nc >= 0 && nc < m && distance[nr][nc] == -1 && matrix[nr][nc] == 0) {
                    distance[nr][nc] = distance[row][col] + 1;
                    Q.emplace(nr, nc);
                }
            }
        }
        
        return distance;
    }
};
