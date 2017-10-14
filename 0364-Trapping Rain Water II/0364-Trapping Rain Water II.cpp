class Solution {
public:
    /*
     * @param heights: a matrix of integers
     * @return: an integer
     */
    int trapRainWater(vector<vector<int>> &heights) {
        // write your code here
        int m = heights.size();
        if (m == 0) {
            return 0;
        }
        int n = heights[0].size();
        priority_queue<Cell> pq;
        vector<vector<bool>> visited(m, vector<bool>(n));
        for (int i = 0; i < m; ++i) {
            pq.emplace(i, 0, heights[i][0]);
            visited[i][0] = true;
            if (n > 1) {
                pq.emplace(i, n - 1, heights[i][n - 1]);
                visited[i][n - 1] = true;
            }
        }
        
        for (int j = 1; j < n - 1; ++j) {
            pq.emplace(0, j, heights[0][j]);
            visited[0][j] = true;
            if (m > 1) {
                pq.emplace(m - 1, j, heights[m - 1][j]);
                visited[m - 1][j] = true;
            }
        }
        
        int sum = 0;
        vector<int> dx = {-1, 1, 0, 0};
        vector<int> dy = {0, 0, -1, 1};
        while (!pq.empty()) {
            Cell cell = pq.top();
            pq.pop();
            int row = cell.row;
            int col = cell.col;
            int val = cell.val;
            for (int k = 0; k < dx.size(); ++k) {
                int nr = row + dx[k];
                int nc = col + dy[k];
                if (nr >= 0 && nr < m && nc >= 0 && nc < n && !visited[nr][nc]) {
                    if (heights[nr][nc] < val) {
                        sum += val - heights[nr][nc];
                        pq.emplace(nr, nc, val);
                    }
                    else {
                        pq.emplace(nr, nc, heights[nr][nc]);
                    }
                    visited[nr][nc] = true;
                }
            }
        }
        
        return sum;
    }
    
private:
    struct Cell {
        int row;
        int col;
        int val;
        Cell (int r, int c, int v): row(r), col(c), val(v){}
        bool operator < (const Cell &c) const {
            return val > c.val;
        }
    };
};
