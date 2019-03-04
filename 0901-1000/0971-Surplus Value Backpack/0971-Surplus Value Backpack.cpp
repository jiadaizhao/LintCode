class Solution {
public:
    /**
     * @param k1: The coefficient of A
     * @param k2: The  coefficient of B
     * @param c: The volume of backpack
     * @param n: The amount of A
     * @param m: The amount of B
     * @param a: The volume of A
     * @param b: The volume of B
     * @return: Return the max value you can get
     */
    long long getMaxValue(int k1, int k2, int c, int n, int m, vector<int> &a, vector<int> &b) {
        // Write your code here
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        vector<long long> presuma(1 + n), presumb(1 + m);
        for (int i = 1; i <= n; ++i) {
            presuma[i] = presuma[i - 1] + a[i - 1];
        }
        for (int j = 1; j <= m; ++j) {
            presumb[j] = presumb[j - 1] + b[j - 1];
        }
        
        vector<vector<long long>> dp(1 + n, vector<long long>(1 + m));
        for (int i = 1; i <= n; ++i) {
            dp[i][0] = dp[i - 1][0];
            if (c > presuma[i]) {
                dp[i][0] += (c - presuma[i]) * k1;
            }
        }
        
        for (int j = 1; j <= m; ++j) {
            dp[0][j] = dp[0][j - 1];
            if (c > presumb[j]) {
                dp[0][j] += (c - presumb[j]) * k2;
            }
        }
        
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                if (c - presuma[i] - presumb[j] > 0) {
                    dp[i][j] = max({dp[i][j], dp[i - 1][j] + (c - presuma[i] - presumb[j]) * k1,
                                    dp[i][j - 1] + (c - presuma[i] - presumb[j]) * k2});
                }
            }
        }
        return dp[n][m];
    }
};

// Optimize space to O(m)
class Solution {
public:
    /**
     * @param k1: The coefficient of A
     * @param k2: The  coefficient of B
     * @param c: The volume of backpack
     * @param n: The amount of A
     * @param m: The amount of B
     * @param a: The volume of A
     * @param b: The volume of B
     * @return: Return the max value you can get
     */
    long long getMaxValue(int k1, int k2, int c, int n, int m, vector<int> &a, vector<int> &b) {
        // Write your code here
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        vector<long long> presuma(1 + n), presumb(1 + m);
        for (int i = 1; i <= n; ++i) {
            presuma[i] = presuma[i - 1] + a[i - 1];
        }
        for (int j = 1; j <= m; ++j) {
            presumb[j] = presumb[j - 1] + b[j - 1];
        }
        
        vector<long long> dp(1 + m);
        for (int j = 1; j <= m; ++j) {
            dp[j] = dp[j - 1];
            if (c > presumb[j]) {
                dp[j] += (c - presumb[j]) * k2;
            }
        }
        
        for (int i = 1; i <= n; ++i) {
            if (c > presuma[0]) {
                dp[0] += (c - presuma[i]) * k1;
            }
            for (int j = 1; j <= m; ++j) {
                long long temp = dp[j];
                dp[j] = max(temp, dp[j - 1]);
                if (c - presuma[i] - presumb[j] > 0) {
                    dp[j] = max({dp[j], temp + (c - presuma[i] - presumb[j]) * k1,
                                    dp[j - 1] + (c - presuma[i] - presumb[j]) * k2});
                }
            }
        }
        return dp[m];
    }
};


// Terminate early
class Solution {
public:
    /**
     * @param k1: The coefficient of A
     * @param k2: The  coefficient of B
     * @param c: The volume of backpack
     * @param n: The amount of A
     * @param m: The amount of B
     * @param a: The volume of A
     * @param b: The volume of B
     * @return: Return the max value you can get
     */
    long long getMaxValue(int k1, int k2, int c, int n, int m, vector<int> &a, vector<int> &b) {
        // Write your code here
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        vector<long long> presuma(1 + n), presumb(1 + m);
        for (int i = 1; i <= n; ++i) {
            presuma[i] = presuma[i - 1] + a[i - 1];
        }
        for (int j = 1; j <= m; ++j) {
            presumb[j] = presumb[j - 1] + b[j - 1];
        }
        
        vector<long long> dp(1 + m);
        long long maxVal = 0;
        for (int j = 1; j <= m; ++j) {
            dp[j] = dp[j - 1];
            if (c > presumb[j]) {
                dp[j] += (c - presumb[j]) * k2;
                maxVal = max(maxVal, dp[j]);
            }
            else {
                break;
            }
        }
        
        for (int i = 1; i <= n; ++i) {
            if (c > presuma[0]) {
                dp[0] += (c - presuma[i]) * k1;
                maxVal = max(maxVal, dp[0]);
            }
            else {
                break;
            }
            for (int j = 1; j <= m; ++j) {
                long long temp = dp[j];
                dp[j] = max(temp, dp[j - 1]);
                if (c - presuma[i] - presumb[j] > 0) {
                    dp[j] = max({dp[j], temp + (c - presuma[i] - presumb[j]) * k1,
                                    dp[j - 1] + (c - presuma[i] - presumb[j]) * k2});
                    maxVal = max(maxVal, dp[j]);
                }
                else {
                    break;
                }
            }
        }
        return maxVal;
    }
};
