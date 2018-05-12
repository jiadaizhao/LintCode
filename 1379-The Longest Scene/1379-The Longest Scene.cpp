class Solution {
public:
    /**
     * @param str: The scene string
     * @return: Return the length longest scene
     */
    int getLongestScene(string &str) {
        // Write your code here
        vector<int> last(26);
        for (int i = 0; i < str.size(); ++i) {
            last[str[i] - 'a'] = i;
        }
        
        int maxLen = 0, start = 0, j = 0;
        for (int i = 0; i < str.size(); ++i) {
            j = max(j, last[str[i] - 'a']);
            if (j == i) {
                maxLen = max(maxLen, i - start + 1);
                start = i + 1;
            }
        }
        return maxLen;
    }
};
