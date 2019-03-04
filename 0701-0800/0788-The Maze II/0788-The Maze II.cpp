class Solution {
public:
    /**
     * @param maze: the maze
     * @param start: the start
     * @param destination: the destination
     * @return: the shortest distance for the ball to stop at the destination
     */
    int shortestDistance(vector<vector<int>> &maze, vector<int> &start, vector<int> &destination) {
        // write your code here
        int m = maze.size(), n = maze[0].size();
        priority_queue<Node> pq;
        vector<vector<int>> distance(m, vector<int>(n, INT_MAX));
        pq.emplace(start[0], start[1], 0);
        distance[start[0]][start[1]] = 0;
        int dr[4] = {-1, 1, 0, 0};
        int dc[4] = {0, 0, -1, 1};
        while (!pq.empty()) {
            int row = pq.top().row;
            int col = pq.top().col;
            int dist = pq.top().dist;
            if (row == destination[0] && col == destination[1]) {
                return dist;
            }
            pq.pop();
            for (int k = 0; k < 4; ++k) {
                int nr = row + dr[k];
                int nc = col + dc[k];
                int nd = dist + 1;
                while (nr >= 0 && nr < m && nc >= 0 && nc < n && maze[nr][nc] == 0) {
                    nr += dr[k];
                    nc += dc[k];
                    ++nd;
                }
                nr -= dr[k];
                nc -= dc[k];
                --nd;
                
                if (distance[nr][nc] > nd) {
                    pq.emplace(nr, nc, nd);
                    distance[nr][nc] = nd;
                }
            }
        }
        return -1;
    }
    
private:
    struct Node {
        int row;
        int col;
        int dist;
        Node(int r, int c, int d): row(r), col(c), dist(d){}
        bool operator < (const Node& node) const {
            return dist > node.dist;
        }
    };
};
