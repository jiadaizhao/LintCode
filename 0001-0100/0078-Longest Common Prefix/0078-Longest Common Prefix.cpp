class Solution {
public:    
    /**
     * @param strs: A list of strings
     * @return: The longest common prefix
     */
    string longestCommonPrefix(vector<string> &strs) {
        // write your code here
        int n = strs.size();
        if (n == 0)
        {
            return "";
        }
        
        string result;
        for (int i = 0; i < strs[0].size(); ++i)
        {
            char c = strs[0][i];
            for (int j = 1; j < n; ++j)
            {
                if (i >= strs[j].size() || strs[j][i] != c)
                {
                    return result;
                }
            }
            result.push_back(c);
        }
        
        return result;
    }
};
