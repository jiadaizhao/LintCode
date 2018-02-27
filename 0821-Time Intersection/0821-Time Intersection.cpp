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
    /**
     * @param seqA: the list of intervals
     * @param seqB: the list of intervals
     * @return: the time periods
     */
    vector<Interval> timeIntersection(vector<Interval> &seqA, vector<Interval> &seqB) {
        // Write your code here
        vector<Interval> result;
        int i = 0, j = 0;
        while (i < seqA.size() && j < seqB.size()) {
            int start = max(seqA[i].start, seqB[j].start);
            int end = min(seqA[i].end, seqB[j].end);
            if (start <= end) {
                result.emplace_back(start, end);
            }
            
            if (seqA[i].end <= seqB[j].end) {
                ++i;
            }
            else {
                ++j;
            }
        }
        return result;
    }
};
