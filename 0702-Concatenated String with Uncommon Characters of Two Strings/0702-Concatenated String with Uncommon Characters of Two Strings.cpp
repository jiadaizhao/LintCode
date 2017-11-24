class Solution {
public:
    /*
     * @param : the 1st string
     * @param : the 2nd string
     * @return: uncommon characters of given strings
     */
    string concatenetedString(string &s1, string &s2) {
        // write your code here
        vector<int> table(256);
        for (char c : s2) {
            table[c] = 2;
        }
        
        string result;
        for (char c : s1) {
            if (table[c] == 0) {
                result += c;
            }
            else {
                table[c] = 1;
            }
        }
        
        for (char c : s2) {
            if (table[c] == 2) {
                result += c;
            }
        }
        return result;
    }
};
