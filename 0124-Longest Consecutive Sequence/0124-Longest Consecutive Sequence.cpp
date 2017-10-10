class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return an integer
     */
    int longestConsecutive(vector<int> &num) {
        // write you code here
        int n = num.size();
        if (n == 0)
        {
            return 0;
        }
        
        unordered_set<int> table;
        for (int i : num)
        {
            table.insert(i);
        }
        
        int maxLen = 1;
        for (int i : num)
        {
            if (table.find(i) == table.end())
            {
                continue;
            }
            
            int j = i - 1;
            int len = 1;
            while (table.find(j) != table.end())
            {
                ++len;
                table.erase(j--);
            }
            
            j = i + 1;
            while (table.find(j) != table.end())
            {
                ++len;
                table.erase(j++);
            }
            maxLen = max(maxLen, len);
        }
        
        return maxLen;
    }
};
