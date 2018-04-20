class Solution {
public:
    /**
     * @param s: The data stream
     * @return: Return the judgement stream
     */
    vector<int> getStream(string &s) {
        // Write your code here
        int n = s.size();
        vector<int> result(n), table(128);
        int odd = 0;
        for (int i = 0; i < n; ++i) {
            ++table[s[i]];
            if (table[s[i]] & 1) {
                ++odd;
            }
            else {
                --odd;
            }
            if (odd <= 1) {
                result[i] = 1;
            }
        }
        return result;
    }
};
