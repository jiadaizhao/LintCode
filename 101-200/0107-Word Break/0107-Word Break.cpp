class Solution {
public:
    /**
     * @param s: A string s
     * @param dict: A dictionary of words dict
     */
    bool wordBreak(string s, unordered_set<string> &dict) {
        // write your code here
        int maxLen = 0;
        for (auto it = dict.begin(); it != dict.end(); ++it)
        {
            maxLen = max(maxLen, (int)(it->size()));
        }
        
        int n = s.size();
        vector<bool> dp(1 + n);
        dp[0] = true;
        for (int j = 1; j <= n; ++j)
        {
            for (int i = j - 1; i >= 0 && i >= j - maxLen; --i)
            {
                if (dp[i] && dict.find(s.substr(i, j - i)) != dict.end())
                {
                    dp[j] = true;
                    break;
                }
            }
        }
        
        return dp[n];
    }
};
