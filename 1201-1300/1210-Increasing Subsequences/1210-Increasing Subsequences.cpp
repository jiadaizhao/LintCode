class Solution {
public:
    /**
     * @param nums: an integer array
     * @return: all the different possible increasing subsequences of the given array
     */
    vector<vector<int>> findSubsequences(vector<int> &nums) {
        // Write your code here
        vector<vector<int>> result;
        if (nums.size() == 0) {
            return result;
        }
        
        vector<int> path;
        dfs(nums, 0, path, result);
        return result;
    }
    
private:
    void dfs(vector<int>& nums, int start, vector<int>& path, vector<vector<int>>& result) {
        if (path.size() >= 2) {
            result.push_back(path);
        }
        
        unordered_set<int> table;
        for (int i = start; i < nums.size(); ++i) {
            if (table.find(nums[i]) == table.end() && (path.size() == 0 || nums[i] >= path.back())) {
                table.insert(nums[i]);
                path.push_back(nums[i]);
                dfs(nums, i + 1, path, result);
                path.pop_back();
            }
        }
    }
};
