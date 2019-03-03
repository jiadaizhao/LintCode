/**
 * Definition for a point.
 * struct Point {
 *     int x;
 *     int y;
 *     Point() : x(0), y(0) {}
 *     Point(int a, int b) : x(a), y(b) {}
 * };
 */
class Solution {
public:
    /**
     * @param n an integer
     * @param m an integer
     * @param operators an array of point
     * @return an integer array
     */
    vector<int> numIslands2(int n, int m, vector<Point>& operators) {
        // Write your code here
        vector<int> result;
        if (n <= 0 || m <= 0)
        {
            return result;
        }
        
        int count = 0;
        vector<int> parent(n * m, -1);
        vector<int> deltaX = {-1, 1, 0, 0};
        vector<int> deltaY = {0, 0, -1, 1};
        for (Point& p : operators)
        {
            int x = p.x;
            int y = p.y;
            int pos = x * m + y;
            if (parent[pos] == -1)
            {
                ++count;
                parent[pos] = pos;
                for (int i = 0; i < deltaX.size(); ++i)
                {
                    int nx = x + deltaX[i];
                    int ny = y + deltaY[i];
                    int npos = nx * m + ny;
                    if (nx < 0 || nx >= n || ny < 0 || ny >= m || parent[npos] == -1)
                    {
                        continue;
                    }
                    
                    int posParent = findParent(parent, pos);
                    int nposParent = findParent(parent, npos);
                    if (posParent != nposParent)
                    {
                        --count;
                        parent[posParent] = nposParent;
                    }
                }
            }
            
            result.push_back(count);
        }
        
        return result;
    }
private:
    int findParent(vector<int>& parent, int pos)
    {
        while (parent[pos] != pos)
        {
            parent[pos] = parent[parent[pos]];
            pos = parent[pos];
        }
        
        return pos;
    }
};
