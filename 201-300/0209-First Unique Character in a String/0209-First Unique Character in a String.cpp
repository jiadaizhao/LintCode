class Solution {
public:
    /**
     * @param str: str: the given string
     * @return: char: the first unique character in a given string
     */
    char firstUniqChar(string &str) {
        // Write your code here
        vector<int> table(256);
        for (char c : str) {
            ++table[c];
        }
        char result = 'a';
        for (char c : str) {
            if (table[c] == 1) {
                result = c;
                break;
            }
        }
        return result;
    }
};
