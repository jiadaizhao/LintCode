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
     * @param intervals: The intervals
     * @return: The answer
     */
    int digitalCoverage(vector<Interval> &intervals) {
        // Write your code here
        int n = intervals.size();
        vector<pair<int, int>> nodes(n * 2);
        for (int i = 0; i < n; ++i) {
            nodes[i * 2] = {intervals[i].start, 1};
            nodes[i * 2 + 1] = {intervals[i].end + 1, 0};
        }
        sort(nodes.begin(), nodes.end());
        int count = 0, maxCount = 0, minNum = INT_MAX;
        for (auto node : nodes) {
            if (node.second) {
                ++count;
                if (count > maxCount) {
                    maxCount = count;
                    minNum = node.first;
                }
            }
            else {
                --count;
            }
        }
        return minNum;
    }
};

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
     * @param intervals: The intervals
     * @return: The answer
     */
    int digitalCoverage(vector<Interval> &intervals) {
        // Write your code here
        vector<int> counts(100002);
        for (Interval i : intervals) {
            ++counts[i.start];
            --counts[i.end + 1];
        }
        
        int count = 0, maxCount = 0, minNum = INT_MAX;
        for (int i = 1; i <= 100000; ++i) {
            count += counts[i];
            if (count > maxCount) {
                maxCount = count;
                minNum = i;
            }
        }
        return minNum;
    }
};
