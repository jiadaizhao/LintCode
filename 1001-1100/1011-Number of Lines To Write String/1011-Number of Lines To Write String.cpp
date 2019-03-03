class Solution {
public:
    /**
     * @param widths: an array
     * @param S: a string
     * @return: how many lines have at least one character from S, and what is the width used by the last such line
     */
    vector<int> numberOfLines(vector<int> &widths, string &S) {
        // Write your code here
        int line = 0, i = 0, n = S.size(), last = 0;
        while (i < n) {
            ++line;
            int curr = 0;
            while (i < n && curr + widths[S[i] - 'a'] <= 100) {
                curr += widths[S[i] - 'a'];
                ++i;
            }
            last = curr;
        }
        return {line, last};
    }
};
