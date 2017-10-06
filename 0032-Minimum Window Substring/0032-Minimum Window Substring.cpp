class Solution {
public:    
    /**
     * @param source: A string
     * @param target: A string
     * @return: A string denote the minimum window
     *          Return "" if there is no such a string
     */
    string minWindow(string &source, string &target) {
        // write your code here
        int m = source.size();
        int n = target.size();
        if (m < n)
        {
            return "";
        }
        
        vector<int> table(256);
        int count = 0;
        for (char c : target)
        {
            ++table[c];
            ++count;
        }
        
        string result;
        int minSize = m + 1;
        int j = 0;
        for (int i = 0; i < m - n + 1; ++i)
        {
            while (j < m && count)
            {
                --table[source[j]];
                if (table[source[j]] >= 0)
                {
                    --count;
                }
                ++j;
            }
            
            if (count == 0 && j - i < minSize)
            {
                minSize = j - i;
                result = source.substr(i, minSize);
            }
            
            if (table[source[i]] >= 0)
            {
                ++count;
            }
            ++table[source[i]];
        }
        
        return result;
    }
};
