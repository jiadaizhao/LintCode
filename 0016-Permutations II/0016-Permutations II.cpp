class Solution {
public:
    /**
     * @param nums: A list of integers.
     * @return: A list of unique permutations.
     */
    vector<vector<int> > permuteUnique(vector<int> &nums) {
        // write your code here
        vector<vector<int>> result;
        vector<int> path;
        if (nums.size() == 0)
        {
            result.push_back(path);
            return result;
        }
        vector<bool> used(nums.size(), false);
        sort(nums.begin(), nums.end());
        dfs(nums, path, used, result);
        return result;
    }
private:
    void dfs(vector<int>& nums, vector<int>& path, vector<bool>& used, vector<vector<int>>& result)
    {
        if (path.size() == nums.size())
        {
            result.push_back(path);
        }
        
        for (int i = 0; i < nums.size(); ++i)
        {
            if (used[i])
            {
                continue;
            }
            if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1])
            {
                continue;
            }
            used[i] = true;
            path.push_back(nums[i]);
            dfs(nums, path, used, result);
            used[i] = false;
            path.pop_back();
        }
    }
};
