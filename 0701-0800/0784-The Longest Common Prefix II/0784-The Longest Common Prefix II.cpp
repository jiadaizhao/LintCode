class Solution {
public:
    /**
     * @param dic: the n strings
     * @param target: the target string
     * @return: The ans
     */
    int theLongestCommonPrefix(vector<string> &dic, string &target) {
        // write your code here
        int maxLen = 0;
        for (string s : dic) {
            int len = 0;
            for (int i = 0; i < target.size(); ++i) {
                if (i < s.size() && s[i] == target[i]) {
                    ++len;
                }
                else {
                    break;
                }
            }
            maxLen = max(maxLen, len);
        }
        return maxLen;
    }
};
