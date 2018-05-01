struct pairhash {
    size_t operator()(const pair<int, int> &p) const {
        return hash<int>()(p.first) ^ hash<int>()(p.second);
    }
};

class Solution {
public:
    /**
     * @param points: n points on a 2D plane
     * @return: if there is such a line parallel to y-axis that reflect the given points
     */
    bool isReflected(vector<vector<int>> &points) {
        // Write your code here
        int minX = INT_MAX, maxX = INT_MIN;
        unordered_set<pair<int, int>, pairhash> table;
        for (auto& p : points) {
            minX = min(minX, p[0]);
            maxX = max(maxX, p[0]);
            table.insert({p[0], p[1]});
        }
        
        int sum = minX + maxX;
        for (auto& p : points) {
            if (table.find({sum - p[0], p[1]}) == table.end()) {
                return false;
            }
        }
        
        return true;
    }
};
