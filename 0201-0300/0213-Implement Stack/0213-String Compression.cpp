class Solution {
public:
    /*
     * @param str: a string
     * @return: a compressed string
     */
    string compress(string &str) {
        // write your code here
        int n = str.size();
        if (n == 0) {
            return str;
        }
        string result;
        int start = 0;
        for (int i = 1; i < n; ++i) {
            if (str[i] != str[i - 1]) {
                result += str[start] + to_string(i - start);
                start = i;
            }
        }
        
        result += str[start] + to_string(n - start);
        if (result.size() >= n) {
            return str;
        }
        else {
            return result;
        }        
    }
};
