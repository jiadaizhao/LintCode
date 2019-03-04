class Solution {
public:
    /**
     * @param n: an array consisting of n integers from 1 to n
     * @return: the number of derangement it can generate
     */
    int findDerangement(int n) {
        // Write your code here
        int MOD = 1000000007;
        if (n == 1) {
            return 0;
        }
        if (n == 2) {
            return 1;
        }
        int dp1 = 0, dp2 = 1, dp3 = 0;
        for (int i = 3; i <= n; ++i) {
            dp3 = ((i - 1L) * (dp1 + dp2)) % MOD;
            dp1 = dp2;
            dp2 = dp3;
        }
        
        return dp3;
    }
};
