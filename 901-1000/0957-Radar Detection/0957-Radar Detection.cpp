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
     * @param coordinates: The radars' coordinate
     * @param radius: Detection radius of radars
     * @return: The car was detected or not
     */
    string radarDetection(vector<Point> &coordinates, vector<int> &radius) {
        // Write your code here
        for (int i = 0; i < radius.size(); ++i) {
            int y = coordinates[i].y;
            int r = radius[i];
            if (y + r > 0 && y - r < 1) {
                return "YES";
            }
        }
        return "NO";
    }
};
