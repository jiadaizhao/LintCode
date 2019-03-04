class Solution {
public:
    /**
     * @param strs: an array with strings include only 0 and 1
     * @param m: An integer
     * @param n: An integer
     * @return: find the maximum number of strings
     */
    int findMaxForm(vector<string> &strs, int m, int n) {
        // write your code here
        vector<vector<int>> dp(1 + m, vector<int>(1 + n));
        for (string str : strs) {
            int count0 = 0, count1 = 0;
            for (char c : str) {
                if (c == '0')
                    ++count0;
                else if (c == '1')
                    ++count1;
            }
            for (int j = m; j >= count0; --j) {
                for (int k = n; k >= count1; --k) {
                    dp[j][k] = max(dp[j][k], dp[j - count0][k - count1] + 1);
                }
            }
        }
        return dp[m][n];
    }
};
