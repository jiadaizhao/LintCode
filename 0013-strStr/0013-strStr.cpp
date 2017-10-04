class Solution {
public:
    /**
     * Returns a index to the first occurrence of target in source,
     * or -1  if target is not part of source.
     * @param source string to be scanned.
     * @param target string containing the sequence of characters to match.
     */
    int strStr(const char *source, const char *target) {
        // write your code here
        if (!source || !target)
        {
            return -1;
        }
        
        int n = 0;
        for (const char *p = source; *p; ++p)
        {
            ++n;
        }
        int m = 0;
        for (const char *p = target; *p; ++p)
        {
            ++m;
        }
        
        for (int i = 0; i < n - m + 1; ++i)
        {
            int j;
            for (j = 0; j < m; ++j)
            {
                if (source[i + j] != target[j])
                {
                    break;
                }
            }
            if (j == m)
            {
                return i;
            }
        }
        return -1;
    }
};
