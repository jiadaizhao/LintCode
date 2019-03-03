class Solution {
public:
    /**
     * @param nums: A list of integers.
     * @return: A list of permutations.
     */
    vector<vector<int> > permute(vector<int>& nums) {
        // write your code here
        vector<vector<int>> result;
        dfs(nums, 0, result);
        return result;
        
    }
private:
    void dfs(vector<int>& nums, int start, vector<vector<int>>& result)
    {
        if (start == nums.size())
        {
            result.push_back(nums);
        }
        for (int i = start; i < nums.size(); ++i)
        {
            swap(nums[i], nums[start]);
            dfs(nums, start + 1, result);
            swap(nums[i], nums[start]);
        }
    }
};
