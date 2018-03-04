/**
 * Definition of Interval:
 * class Interval {
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 */
class Solution {
public:
    /**
     * @param logs: Sequence of processes
     * @param queries: Sequence of queries
     * @return: Return the number of processes
     */
    vector<int> numberOfProcesses(vector<Interval> &logs, vector<int> &queries) {
        // Write your code here
        vector<pair<int, int>> times;
        for (Interval log : logs) {
            times.emplace_back(log.start, 1);
            times.emplace_back(log.end + 1, 0);
        }
        
        for (int q : queries) {
            times.emplace_back(q, 2);
        }
        
        sort(times.begin(), times.end());
        int count = 0;
        unordered_map<int, int> table;
        for (auto t : times) {
            if (t.second == 1) {
                ++count;
            }
            else if (t.second == 0) {
                --count;
            }
            else {
                table[t.first] = count;
            }
        }
        vector<int> result(queries.size());
        
        for (int i = 0; i < queries.size(); ++i) {
            result[i] = table[queries[i]];
        }
        
        return result;
    }
};
