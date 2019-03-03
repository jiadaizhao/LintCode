/**
 * Definition of Interval:
 * class Interval {
 * public:
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
     * Insert newInterval into intervals.
     * @param intervals: Sorted interval list.
     * @param newInterval: new interval.
     * @return: A new interval list.
     */
    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
        // write your code here
        vector<Interval> result;
        int i;
        for (i = 0; i < intervals.size(); ++i)
        {
            if (intervals[i].end < newInterval.start)
            {
                result.push_back(intervals[i]);
            }
            else if (intervals[i].start > newInterval.end)
            {
                break;
            }
            else
            {
                newInterval.start = min(newInterval.start, intervals[i].start);
                newInterval.end = max(newInterval.end, intervals[i].end);
            }
        }
        
        result.push_back(newInterval);
        while (i < intervals.size())
        {
            result.push_back(intervals[i++]);
        }
        
        return result;
    }
};
