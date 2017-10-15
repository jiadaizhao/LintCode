class Solution {
public:
    /**
     * @param s : A string
     * @return : The length of the longest substring 
     *           that contains at most k distinct characters.
     */
    int lengthOfLongestSubstringKDistinct(string s, int k) {
        // write your code here
        int maxLen = 0;
        int count = 0;
        int j = 0;
        vector<int> table(256);
        for (int i = 0; i < s.size(); ++i)
        {
            while (j < s.size() && count <= k)
            {
                ++table[s[j]];
                if (table[s[j]] == 1)
                {
                    ++count;
                }
                
                if (count <= k)
                {
                    maxLen = max(maxLen, j - i + 1);
                }
                ++j;
            }
            
            if (table[s[i]] == 1)
            {
                --count;
            }
            
            --table[s[i]];
        }
        
        return maxLen;
    }
};
