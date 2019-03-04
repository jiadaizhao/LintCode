class Solution {
public:
    /**
     * @param list1: one of the given list
     * @param list2: another list
     * @return: the new sorted list of interval
     */
    vector<Interval> mergeTwoInterval(vector<Interval> &list1, vector<Interval> &list2) {
        // write your code here
        vector<Interval> result;
        int i = 0, j = 0;
        while (i < list1.size() || j < list2.size()) {
            if (j == list2.size() || (i < list1.size() && list1[i].start <= list2[j].start)) {
                if (result.size() && list1[i].start <= result.back().end) {
                    result.back().end = max(result.back().end, list1[i].end);
                }
                else {
                    result.push_back(list1[i]);
                }
                ++i;
            }
            else {
                if (result.size() && list2[j].start <= result.back().end) {
                    result.back().end = max(result.back().end, list2[j].end);
                }
                else {
                    result.push_back(list2[j]);
                }
                ++j;
            }
        }
        return result;
    }
};
