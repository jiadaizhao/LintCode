// https://www.careercup.com/question?id=5745795300065280
// http://www.geeksforgeeks.org/calculate-maximum-value-using-sign-two-numbers-string/

class Solution {
public:
    /*
     * @param : the given string
     * @return: the maximum value
     */
    int calcMaxValue(string &str) {
        // write your code here
        int n = str.size();
        int result = 0;
        for (char c : str) {
            if (c == '0' || c == '1' || result <= 1) {
                result += c - '0';
            }
            else {
                result *= c - '0';
            }
        }
        return result;
    }
};
