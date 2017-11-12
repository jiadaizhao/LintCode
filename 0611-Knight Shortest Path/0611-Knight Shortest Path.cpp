/**
 * Definition for a point.
 * struct Point {
 *     int x, y;
 *     Point() : x(0), y(0) {}
 *     Point(int a, int b) : x(a), y(b) {}
 * };
 */
class Solution {
public:
    /**
     * @param grid a chessboard included 0 (false) and 1 (true)
     * @param source, destination a point
     * @return the shortest path 
     */
    int shortestPath(vector<vector<bool>>& grid, Point& source, Point& destination) {
        // Write your code here
        int m = grid.size();
        if (m == 0) {
            return -1;
        }
        
        int n = grid[0].size();
        if (source.x == destination.x && source.y == destination.y) {
            return 0;
        }
        int count = 0;
        queue<Point> Q;
        Q.push(source);
        grid[source.x][source.y] = 1;
        vector<int> deltaX = {1, 1, -1, -1, 2, 2, -2, -2};
        vector<int> deltaY = {2, -2, 2, -2, 1, -1, 1, -1};
        while (!Q.empty()) {
            int qs = Q.size();
            ++count;
            for (int i = 0; i < qs; ++i) {
                Point p = Q.front();
                Q.pop();
                for (int j = 0; j < deltaX.size(); ++j) {
                    int r = p.x + deltaX[j];
                    int c = p.y + deltaY[j];
                    if (r >= 0 && r < m && c >= 0 && c < n && grid[r][c] != 1) {
                        if (r == destination.x && c == destination.y) {
                            return count;
                        }
                        Q.push(Point(r, c));
                        grid[r][c] = 1;
                    }
                }
            }
        }
        
        return -1;        
    }
};
