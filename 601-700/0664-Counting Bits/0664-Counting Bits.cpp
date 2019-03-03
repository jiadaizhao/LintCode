class Solution {
public:
    /**
     * @param num: a non negative integer number
     * @return: an array represent the number of 1's in their binary
     */
    vector<int> countBits(int num) {
        // write your code here
        vector<int> dp(1 + num);
        for (int i = 1; i <= num; ++i) {
            dp[i] = dp[i & (i - 1)] + 1;
        }
        return dp;
    }
};
