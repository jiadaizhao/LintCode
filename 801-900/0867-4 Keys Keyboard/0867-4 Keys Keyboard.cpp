class Solution {
public:
    /**
     * @param N: an integer
     * @return: return an integer
     */
    int maxA(int N) {
        // write your code here
        if (N <= 6) {
            return N;
        }
        
        vector<int> dp(1 + N);
        for (int i = 1; i <= 6; ++i) {
            dp[i] = i;
        }
        
        for (int i = 7; i <= N; ++i) {
            for (int j = i - 3; j >= 1; --j) {
                dp[i] = max(dp[i], dp[j] * (i - j - 1));
            }
        }
        return dp[N];
    }
};
