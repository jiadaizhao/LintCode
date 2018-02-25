class Solution {
public:
    /**
     * @param Maze: 
     * @return: nothing
     */
    int Portal(vector<vector<char>> &Maze) {
        int n = Maze.size(), m = Maze[0].size();
        queue<pair<int, int>> Q;
        bool found = false;
        for (int i = 0; i < n && !found; ++i) {
            for (int j = 0; j < m && !found; ++j) {
                if (Maze[i][j] == 'S') {
                    Q.emplace(i, j);
                    found = true;
                }
            }
        }
        int step = 0;
        vector<int> dr = {-1, 1, 0, 0};
        vector<int> dc = {0, 0, -1, 1};
        while (!Q.empty()) {
            ++step;
            int qs = Q.size();
            for (int i = 0; i < qs; ++i) {
                int row = Q.front().first;
                int col = Q.front().second;
                Q.pop();

                for (int k = 0; k < dr.size(); ++k) {
                    int nr = row + dr[k];
                    int nc = col + dc[k];
                    if (nr >= 0 && nr < n && nc >= 0 && nc < m && Maze[nr][nc] != '#') {
                        if (Maze[nr][nc] == 'E') {
                            return step;
                        }
                        Q.emplace(nr, nc);
                        Maze[nr][nc] = '#';
                    }
                }
            }
        }
        return -1;
    }
};
