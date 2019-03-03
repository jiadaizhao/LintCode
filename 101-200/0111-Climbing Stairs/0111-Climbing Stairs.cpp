class Solution {
public:
    /**
     * @param n: An integer
     * @return: An integer
     */
    int climbStairs(int n) {
        // write your code here
        if (n < 0)
        {
            return 0;
        }
        
        if (n == 0 || n == 1)
        {
            return 1;
        }
        
        int dp0 = 1, dp1 = 1;
        int dp2;
        for (int i = 2; i <= n; ++i)
        {
            dp2 = dp0 + dp1;
            dp0 = dp1;
            dp1 = dp2;
        }

        return dp2;
    }
};
