class Solution {
public:
    /**
     * @param s input string
     * @return the longest palindromic substring
     */
    string longestPalindrome(string& s) {
        // Write your code here
        int n = s.size();
        if (n <= 1)
        {
            return s;
        }
        vector<vector<bool>> isPalindromic(n, vector<bool>(n));
        
        int maxLen = 0;
        int start = 0;
        for (int j = 0; j < n; ++j)
        {
            for (int i = j; i >= 0; --i)
            {
                if (s[i] == s[j] && (j - i < 2 || isPalindromic[i + 1][j - 1]))
                {
                    isPalindromic[i][j] = true;
                    if (j - i + 1 > maxLen)
                    {
                        maxLen = j - i + 1;
                        start = i;
                    }
                }
            }
        }
        
        return s.substr(start, maxLen);
    }
};
