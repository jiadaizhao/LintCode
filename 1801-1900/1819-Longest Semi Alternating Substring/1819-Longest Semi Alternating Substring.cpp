class Solution {
public:
    /**
     * @param s: the string
     * @return: length of longest semi alternating substring
     */
    int longestSemiAlternatingSubstring(string &s) {
        // write your code here
        int maxLen = 0, same = 0, start = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (i == 0 || s[i] == s[i - 1]) {
                ++same;
            }
            else {
                same = 1;
            }
            
            if (same == 3) {
                start = i - 1;
                same = 2;
            }
            else {
                maxLen = max(maxLen, i - start + 1);
            }

        }
        
        return maxLen;
    }
};
