class Solution {
public:
    /**
     * @param str a string
     * @return all permutations
     */
    vector<string> stringPermutation2(string& str) {
        // Write your code here
        vector<string> result;
        if (str.size() == 0)
        {
            result.push_back(str);
            return result;
        }
        
        sort(str.begin(), str.end());
        vector<bool> used(str.size());
        dfs(str, "", used, result);
        return result;
    }
    
private:
    void dfs(string& str, string path, vector<bool>& used, vector<string>& result)
    {
        if (path.size() == str.size())
        {
            result.push_back(path);
            return;
        }
        
        for (int i = 0; i < str.size(); ++i)
        {
            if (used[i] || (i > 0 && str[i] == str[i - 1] && !used[i - 1]))
            {
                continue;
            }
            used[i] = true;
            dfs(str, path + str[i], used, result);
            used[i] = false;
        }
    }
};
