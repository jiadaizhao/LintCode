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
     * @param k: The k
     * @return: The answer
     */
    int maximumLineCoverage(vector<Interval> &intervals, int k) {
        // Write your code here
        int minStart = INT_MAX, maxEnd = 0;
        unordered_map<int, int> table;
        for (auto i : intervals) {
            minStart = min(minStart, i.start);
            maxEnd = max(maxEnd, i.end);
            table[i.start] = max(table[i.start], i.end - i.start + 1);
        }
        
        int num = 0;
        vector<vector<int>> dp(1 + maxEnd, vector<int>(2 + k));
        for (int i = minStart - 1; i < maxEnd; ++i) {
            if (table.count(i + 1)) {
                num = max(num, table[i + 1]);
            }
            
            for (int j = 0; j <= k; ++j) {
                dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
                dp[i + num][j + 1] = max(dp[i + num][j + 1], dp[i][j] + num);
            }
            if (num > 0) {
                --num;
            }
        }
        return dp[maxEnd][k];
    }
};
