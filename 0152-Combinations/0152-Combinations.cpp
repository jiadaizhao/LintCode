class Solution {
public:
    /**
     * @param n: Given the range of numbers
     * @param k: Given the numbers of combinations
     * @return: All the combinations of k numbers out of 1..n
     */
    vector<vector<int> > combine(int n, int k) {
        // write your code here
        vector<vector<int>> result;
        vector<int> path;
        dfs(n, k, 1, path, result);
        return result;
    }
    
private:
    void dfs(int n, int k, int start, vector<int>& path, vector<vector<int>>& result)
    {
        if (path.size() == k)
        {
            result.push_back(path);
            return;
        }
        
        for (int i = start; i <= n; ++i)
        {
            if (path.size() + n - i + 1 >= k)
            {
                path.push_back(i);
                dfs(n, k, i + 1, path, result);
                path.pop_back();
            }
            else
            {
                break;
            }
        }
    }
};
