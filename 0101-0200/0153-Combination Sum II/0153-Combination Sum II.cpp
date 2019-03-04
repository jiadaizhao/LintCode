class Solution {
public:
	/**
	 * @param num: Given the candidate numbers
	 * @param target: Given the target number
	 * @return: All the combinations that sum to target
	 */
    vector<vector<int> > combinationSum2(vector<int> &num, int target) {
        // write your code here
        vector<vector<int>> result;
        if (num.size() == 0 || target <= 0)
        {
            return result;
        }
        sort(num.begin(), num.end());
        vector<int> path;
        dfs(num, 0, target, path, result);
        return result;
    }
private:
    void dfs(vector<int>& num, int start, int target, vector<int>& path,
             vector<vector<int>>& result)
    {
        if (target == 0)
        {
            result.push_back(path);
            return;
        }
        
        for (int i = start; i < num.size(); ++i)
        {
            if (num[i] <= target)
            {
                if (i == start || num[i] != num[i - 1])
                {
                    path.push_back(num[i]);
                    dfs(num, i + 1, target - num[i], path, result);
                    path.pop_back();
                }
            }
            else
            {
                break;
            }
        }
    }
};
