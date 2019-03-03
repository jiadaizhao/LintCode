/**
 * Definition for a point.
 * struct Point {
 *     int x;
 *     int y;
 *     Point() : x(0), y(0) {}
 *     Point(int a, int b) : x(a), y(b) {}
 * };
 */

struct pairhash {
    template<typename T, typename U>
    size_t operator()(const pair<T, U>& p) const {
        return hash<T>()(p.first) ^ hash<U>()(p.second);
    }
};

class Solution {
public:
    /*
     * @param points: an array of point
     * @return: An integer
     */
    int maxPoints(vector<Point> &points) {
        // write your code here
        int n = points.size();
        int maxCount = 0;
        for (int i = 0; i < n; ++i) {
            int sameCount = 0, verticalCount = 0, maxSlopeCount = 0;;
            unordered_map<pair<int, int>, int, pairhash> table;
            for (int j = i + 1; j < n; ++j) {
                if (points[j].x == points[i].x && points[j].y == points[i].y) {
                    ++sameCount;
                }
                else if (points[j].x == points[i].x) {
                    ++verticalCount;
                }
                else {
                    int a = points[j].x - points[i].x;
                    int b = points[j].y - points[i].y;
                    int c = gcd(a, b);
                    a /= c;
                    b /= c;
                    maxSlopeCount = max(maxSlopeCount, ++table[{a, b}]);
                }
            }
            maxCount = max(maxCount, 1 + sameCount + max(verticalCount, maxSlopeCount));
        }
        
        return maxCount;
    }
    
private:
    int gcd(int a, int b) {
        while (b) {
            int temp = a;
            a = b;
            b = temp % b;
        }
        return a;
    }
};
