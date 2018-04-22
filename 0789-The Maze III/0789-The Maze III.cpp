class Solution {
public:
    /**
     * @param maze: the maze
     * @param ball: the ball position
     * @param hole: the hole position
     * @return: the lexicographically smallest way
     */
    string findShortestWay(vector<vector<int>> &maze, vector<int> &ball, vector<int> &hole) {
        // write your code here
        int m = maze.size(), n = maze[0].size();
        priority_queue<Node> pq;
        vector<vector<int>> distance(m, vector<int>(n, INT_MAX));
        pq.emplace(ball[0], ball[1], 0, "");
        distance[ball[0]][ball[1]] = 0;
        int dr[4] = {-1, 1, 0, 0};
        int dc[4] = {0, 0, -1, 1};
        char dir[4] = {'u', 'd', 'l', 'r'};
        while (!pq.empty()) {
            int row = pq.top().row;
            int col = pq.top().col;
            int dist = pq.top().dist;
            string path = pq.top().path;
            if (row == hole[0] && col == hole[1]) {
                return path;
            }
            pq.pop();
            for (int k = 0; k < 4; ++k) {
                int nr = row + dr[k];
                int nc = col + dc[k];
                int nd = dist + 1;
                
                while (nr >= 0 && nr < m && nc >= 0 && nc < n && maze[nr][nc] == 0 && !(nr == hole[0] && nc == hole[1])) {
                    nr += dr[k];
                    nc += dc[k];
                    ++nd;
                }
                
                if (!(nr == hole[0] && nc == hole[1])) {
                    nr -= dr[k];
                    nc -= dc[k];
                    --nd;
                }
                
                if (distance[nr][nc] >= nd && !(row == nr && col == nc)) {
                    pq.emplace(nr, nc, nd, path + dir[k]);
                    distance[nr][nc] = nd;
                }
            }
        }
        return "impossible";
    }
    
private:
    struct Node {
        int row;
        int col;
        int dist;
        string path;
        Node(int r, int c, int d, string p): row(r), col(c), dist(d), path(p){}
        bool operator < (const Node& node) const {
            if (dist == node.dist) {
                return path > node.path;
            }
            return dist > node.dist;
        }
    };
};
