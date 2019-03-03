class Solution {
public:
    /**
     * @param n an integer
     * @return an integer
     */
    int climbStairs2(int n) {
        // Write your code here
        if (n < 0)
        {
            return 0;
        }
        
        if (n == 0)
        {
            return 1;
        }
        
        if (n <= 2)
        {
            return n;
        }
        
        int dp0 = 1, dp1 = 1, dp2 = 2;
        int dp3 = 0;
        for (int i = 3; i <= n; ++i)
        {
            dp3 = dp0 + dp1 + dp2;
            dp0 = dp1;
            dp1 = dp2;
            dp2 = dp3;
        }
        
        return dp3;
    }
};
