class Solution {
public:
    /**
     * @param str: a string
     * @return: return a string
     */
    string reverseWords(string &str) {
        // write your code here
        reverse(str.begin(), str.end());
        int start = 0;
        for (int i = 0; i < str.size(); ++i) {
            if (str[i] == ' ') {
                reverse(str.begin() + start, str.begin() + i);
                start = i + 1;
            }
        }
        reverse(str.begin() + start, str.end());
        return str;
    }
};
