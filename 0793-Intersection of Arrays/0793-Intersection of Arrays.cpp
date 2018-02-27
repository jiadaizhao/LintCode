class Solution {
public:
    /**
     * @param arrs: the arrays
     * @return: the number of the intersection of the arrays
     */
    int intersectionOfArrays(vector<vector<int>> &arrs) {
        // write your code here
        int m = arrs.size();
        unordered_map<int, int> table;
        int count = 0;
        for (auto arr : arrs) {
            for (int i : arr) {
                if (++table[i] == m) {
                    ++count;
                }
            }
        }
        return count;
    }
};
