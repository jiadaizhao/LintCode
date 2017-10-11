class Solution {
public:
    /**
     * @param candidates: A list of integers
     * @param target:An integer
     * @return: A list of lists of integers
     */
    vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
        // write your code here
        vector<vector<int>> result;
        if (candidates.size() == 0 || target <= 0)
        {
            return result;
        }
        sort(candidates.begin(), candidates.end());
        int prev = 0;
        for (int i = 1; i < candidates.size(); ++i)
        {
            if (candidates[i] != candidates[prev])
            {
                candidates[++prev] = candidates[i];
            }
        }
        
        candidates.resize(prev + 1);
        
        vector<int> path;
        dfs(candidates, 0, target, path, result);
        return result;
    }
private:
    void dfs(vector<int>& candidates, int start, int target, vector<int>& path,
             vector<vector<int>>& result)
    {
        if (target == 0)
        {
            result.push_back(path);
            return;
        }
        
        for (int i = start; i < candidates.size(); ++i)
        {
            if (candidates[i] <= target)
            {
                path.push_back(candidates[i]);
                dfs(candidates, i, target - candidates[i], path, result);
                path.pop_back();
            }
            else
            {
                break;
            }
        }
    }

};
