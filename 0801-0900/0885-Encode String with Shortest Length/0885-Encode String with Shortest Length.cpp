class Solution {
public:
    /**
     * @param s: a string
     * @return: return a string
     */
    string encode(string &s) {
        // write your code here
        int n = s.size();
        if (n == 0) {
            return "";
        }
        
        vector<vector<string>> dp(n, vector<string>(n));
        for (int l = 1; l <= n; ++l) {
            for (int i = 0; i < n - l + 1; ++i) {
                int j = i + l - 1;
                dp[i][j] = s.substr(i, l);
                for (int k = i; k < j; ++k) {
                    if (dp[i][k].size() + dp[k + 1][j].size() < dp[i][j].size()) {
                        dp[i][j] = dp[i][k] + dp[k + 1][j];
                    }
                }
                
                string temp = collapse(s, i, j, dp);
                if (temp.size() < dp[i][j].size()) {
                    dp[i][j] = temp;
                }
            }
        }
        
        return dp[0][n - 1];
    }
    
private:
    string collapse(string& s, int i, int j, vector<vector<string>>& dp) {
        string temp = s.substr(i, j - i + 1);
        int pos = (temp + temp).find(temp, 1);
        if (pos >= temp.size()) {
            return temp;
        }
        else {
            return to_string(temp.size() / pos) + '[' + dp[i][i + pos - 1] + ']';
        }
    }
};
