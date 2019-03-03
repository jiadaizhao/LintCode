class Solution {
public:
    /*
     * @param s: a string
     * @return: it's index
     */
    int firstUniqChar(string &s) {
        // write your code here
        int n = s.size();
        vector<int> table(256);
        for (char c : s) {
            ++table[c];
        }

        int result = -1;
        for (int i = 0; i < n; ++i) {
            if (table[s[i]] == 1) {
                result = i;
                break;
            }
        }
        return result;
    }
};
