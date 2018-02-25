class Solution {
public:
    /**
     * @param x: the wall's height
     * @return: YES or NO
     */
    string isBuild(int x) {
        // write you code here
        vector<bool> dp(1 + x);
        dp[0] = true;
        for (int i = 3; i <= x; ++i) {
            if (dp[i - 3]) {
                dp[i] = true;
            }
            else if (i >= 7 && dp[i - 7]) {
                dp[i] = true;
            }
        }
        if (dp[x]) {
            return "YES";
        }
        else {
            return "NO";
        }
    }
};
