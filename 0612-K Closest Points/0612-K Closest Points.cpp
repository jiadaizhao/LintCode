/**
 * Definition for a point.
 * struct Point {
 *     int x;
 *     int y;
 *     Point() : x(0), y(0) {}
 *     Point(int a, int b) : x(a), y(b) {}
 * };
 */
Point globalOrigin;
class Solution {
public:
    /**
     * @param points a list of points
     * @param origin a point
     * @param k an integer
     * @return the k closest points
     */
    vector<Point> kClosest(vector<Point>& points, Point& origin, int k) {
        // Write your code here
        vector<Point> result;
        globalOrigin = origin;
        priority_queue<Point, vector<Point>, cmp> pq;
        for (Point p : points) {
            pq.push(p);
            if (pq.size() > k) {
                pq.pop();
            }
        }
        
        while (!pq.empty()) {
            result.push_back(pq.top());
            pq.pop();
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
    
private:
    struct cmp {
        bool operator () (Point p1, Point p2) {
            int d1 = distance(p1, globalOrigin);
            int d2 = distance(p2, globalOrigin);
            if (d1 == d2) {
                if (p1.x == p2.x) {
                    return p1.y < p2.y;
                }
                else {
                    return p1.x < p2.x;
                }
            }
            else {
                return d1 < d2;
            }
        }
        
        int distance(Point p1, Point p2) {
            return (p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y);
        }
    };
};
