/**
 * Definition of Interval:
 * classs Interval {
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 */


class Solution {
public:
    /*
     * @param intervals: interval list.
     * @return: A new interval list.
     */
    vector<Interval> merge(vector<Interval> &intervals) {
        // write your code here
        vector<Interval> result;
        sort(intervals.begin(), intervals.end(), 
             [](Interval& i1, Interval& i2){return i1.start < i2.start;});
        for (Interval& i : intervals) {
            if (result.size() && result.back().end >= i.start) {
                result.back().end = max(result.back().end, i.end);
            }
            else {
                result.push_back(i);
            }
        }
        
        return result;
    }
};
