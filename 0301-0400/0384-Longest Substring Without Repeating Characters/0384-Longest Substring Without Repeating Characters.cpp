class Solution {
public:
    /**
     * @param s: a string
     * @return: an integer 
     */
    int lengthOfLongestSubstring(string s) {
        // write your code here
        int maxLen = 0;
        int n = s.size();
        int j = 0;
        vector<int> table(256);
        for (int i = 0; i < n; ++i)
        {
            while (j < n && table[s[j]] == 0)
            {
                ++table[s[j]];
                ++j;
            }
            
            maxLen = max(maxLen, j - i);
            --table[s[i]];
        }
        
        return maxLen;
    }
};
