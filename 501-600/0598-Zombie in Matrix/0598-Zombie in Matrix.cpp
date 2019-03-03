class Solution {
public:
    /**
     * @param grid  a 2D integer grid
     * @return an integer
     */
    int zombie(vector<vector<int>>& grid) {
        // Write your code here
        int m = grid.size();
        if (m == 0) {
            return 0;
        }
        
        int n = grid[0].size();
        int people = 0;
        queue<pair<int, int>> Q;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 0) {
                    ++people;
                }
                else if (grid[i][j] == 1) {
                    Q.push({i, j});
                }
            }
        }
        
        if (people == 0) {
            return 0;
        }
        
        int count = 0;
        vector<int> deltaX = {-1, 1, 0, 0};
        vector<int> deltaY = {0, 0, -1, 1};
        while (!Q.empty()) {
            int qs = Q.size();
            ++count;
            for (int i = 0; i < qs; ++i) {
                int x = Q.front().first;
                int y = Q.front().second;
                Q.pop();
                for (int j = 0; j < deltaX.size(); ++j) {
                    int r = x + deltaX[j];
                    int c = y + deltaY[j];
                    if (r >= 0 && r < m && c >= 0 && c < n && grid[r][c] == 0) {
                        if (--people == 0) {
                            return count;
                        }
                        Q.push({r, c});
                        grid[r][c] = 1;
                    }
                }
            }
        }
        
        return -1;
    }
};
