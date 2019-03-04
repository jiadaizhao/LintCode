class Solution {
public:
    /**
     * @param str: s string
     * @return: return an integer, denote the number of the palindromic substrings
     */
    int countPalindromicSubstrings(string &str) {
        // write your code here
        int n = str.size();
        if (n == 0) {
            return 0;
        }
        
        vector<vector<bool>> dp(n, vector<bool>(n));
        int count = 0;
        for (int j = 0; j < n; ++j) {
            for (int i = 0; i <= j; ++i) {
                if (str[i] == str[j] && (j - i < 2 || dp[i + 1][j - 1])) {
                    dp[i][j] = true;
                    ++count;
                }
            }
        }
        
        return count;
    }
};
