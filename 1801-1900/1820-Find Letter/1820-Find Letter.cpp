class Solution {
public:
    /**
     * @param str: the str
     * @return: the letter
     */
    char findLetter(string &str) {
        // Write your code here.
        vector<bool> low(26), up(26);
        for (char c : str) {
            if (c >= 'a' && c <= 'z') {
                low[c - 'a'] = true;
            }
            else {
                up[c - 'A'] = true;
            }
        }
        
        char result = '~';
        for (int i = 25; i >= 0; --i) {
            if (low[i] && up[i]) {
                result = i + 'A';
                break;
            }
        }
        return result;
    }
};
