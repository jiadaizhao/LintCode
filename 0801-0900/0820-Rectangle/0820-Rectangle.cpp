/*
class Point {
    int x, y;
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }
}
*/
struct pairhash {
    size_t operator()(const pair<int, int>& p) const {
        return hash<int>()(p.first) ^ hash<int>()(p.second);
    }
};
class Solution {
public:
    /**
     * @param pointSet: The point set
     * @return: The answer
     */
    string rectangle(vector<Point> &pointSet) {
        // Write your code here
        unordered_set<pair<int, int>, pairhash> table;
        for (Point p : pointSet) {
            table.insert({p.x, p.y});
        }
        for (int i = 0; i < pointSet.size(); ++i) {
            for (int j = i + 1; j < pointSet.size(); ++j) {
                int x1 = pointSet[i].x, y1 = pointSet[i].y;
                int x2 = pointSet[j].x, y2 = pointSet[j].y;
                if (x1 != x2 && y1 != y2 && table.count({x1, y2}) && table.count({x2, y1})) {
                    return "YES";
                }
            }
        }
        return "NO";
    }
};
