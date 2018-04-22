class Solution {
public:
    /**
     * @param maze: the maze
     * @param start: the start
     * @param destination: the destination
     * @return: whether the ball could stop at the destination
     */
    bool hasPath(vector<vector<int>> &maze, vector<int> &start, vector<int> &destination) {
        // write your code here
        int m = maze.size(), n = maze[0].size();
        queue<pair<int, int>> Q;
        vector<vector<bool>> visited(m, vector<bool>(n));
        Q.emplace(start[0], start[1]);
        visited[start[0]][start[1]] = true;
        int dr[4] = {-1, 1, 0, 0};
        int dc[4] = {0, 0, -1, 1};
        while (!Q.empty()) {
            int r = Q.front().first;
            int c = Q.front().second;
            Q.pop();
            for (int k = 0; k < 4; ++k) {
                int nr = r + dr[k];
                int nc = c + dc[k];
                while (nr >= 0 && nr < m && nc >= 0 && nc < n && maze[nr][nc] == 0) {
                    nr += dr[k];
                    nc += dc[k];
                }
                nr -= dr[k];
                nc -= dc[k];
                if (nr == destination[0] && nc == destination[1]) {
                    return true;
                }
                
                if (!visited[nr][nc]) {
                    Q.emplace(nr, nc);
                    visited[nr][nc] = true;
                }
            }
        }
        return false;
    }
};
