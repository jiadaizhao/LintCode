class Solution {
public:
    /**
     * @param array: an integer array
     * @return: the length of the minimum cycle section
     */
    int minimumCycleSection(vector<int> &array) {
        // Write your code here
        int n = array.size();
        vector<int> lps(n);
        int i = 1, len = 0;
        while (i < n) {
            if (array[i] == array[len]) {
                lps[i++] = ++len;
            }
            else if (len != 0) {
                len = lps[len - 1];
            }
            else {
                ++i;
            }
        }
        return n - lps[n - 1];
    }
};
