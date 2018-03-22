/**
 * Definition of Interval:
 * classs Interval {
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param intervals: the given k sorted interval lists
     * @return:  the new sorted interval list
     */
    vector<Interval> mergeKSortedIntervalLists(vector<vector<Interval>> &intervals) {
        // write your code here
        priority_queue<Node> pq;
        vector<Interval> result;
        for (int i = 0; i < intervals.size(); ++i) {
            if (intervals[i].size()) {
                pq.emplace(intervals[i][0].start, intervals[i][0].end, i, 0);
            }
        }
        while (!pq.empty()) {
            Node node = pq.top();
            pq.pop();
            int start = node.start;
            int end = node.end;
            int row = node.row;
            int col = node.col;
            if (result.size() && result.back().end >= start) {
                result.back().end = max(result.back().end, end);
            }
            else {
                result.emplace_back(start, end);
            }
            if (col + 1 < intervals[row].size()) {
                ++col;
                pq.emplace(intervals[row][col].start, intervals[row][col].end, row, col);
            }
        }
        return result;
    }
    
private:
    struct Node {
        int start;
        int end;
        int row;
        int col;
        Node(int s, int e, int r, int c): start(s), end(e), row(r), col(c){}
        bool operator < (const Node& node) const {
            if (start == node.start) {
                return end > node.end;
            }
            return start > node.start;
        }
    };
};
