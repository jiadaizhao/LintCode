class Solution {
public:
    /*
     * @param : an array of arrays
     * @return: return the max distance among arrays
     */
    int maxDiff(vector<vector<int>> &arrs) {
        // write your code here
        int minNum = arrs[0].front(), maxNum = arrs[0].back();
        int maxD = 0;
        for (int i = 1; i < arrs.size(); ++i) {
            maxD = max(maxD, max(abs(arrs[i].front() - maxNum), abs(arrs[i].back() - minNum)));
            minNum = min(minNum, arrs[i].front());
            maxNum = max(maxNum, arrs[i].back());
        }
        return maxD;
    }
};
