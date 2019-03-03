class Solution {
public:
    /**
     * @param A: An array of non-negative integers.
     * return: The maximum amount of money you can rob tonight
     */
    long long houseRobber(vector<int> A) {
        // write your code here
        if (A.size() == 0)
        {
            return 0;
        }
        long long dp0 = 0, dp1 = A[0], dp2 = A[0];
        for (int i = 2; i <= A.size(); ++i)
        {
            dp2 = max(dp1, dp0 + A[i - 1]);
            dp0 = dp1;
            dp1 = dp2;
        }
        
        return dp2;
    }
};
