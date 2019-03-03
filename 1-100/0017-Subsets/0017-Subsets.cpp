class Solution {
public:
    /**
     * @param S: A set of numbers.
     * @return: A list of lists. All valid subsets.
     */
    vector<vector<int> > subsets(vector<int> &nums) {
    	// write your code here
    	sort(nums.begin(), nums.end());
    	vector<vector<int>> result;
    	vector<int> path;
    	dfs(nums, 0, path, result);
    	return result;
    }
private:
    void dfs(vector<int>& nums, int start, vector<int>& path, vector<vector<int>>& result)
    {
        result.push_back(path);
        for (int i = start; i < nums.size(); ++i)
        {
            path.push_back(nums[i]);
            dfs(nums, i + 1, path, result);
            path.pop_back();
        }
    }
};

class Solution {
public:
    /*
     * @param nums: A set of numbers
     * @return: A list of lists
     */
    vector<vector<int>> subsets(vector<int> &nums) {
        // write your code here
        sort(nums.begin(), nums.end());
    	vector<vector<int>> result;
    	int n = nums.size();
    	for (int i = 0; i < (1 << n); ++i) {
    	    vector<int> path;
    	    for (int j = 0; j < n; ++j) {
    	        if ((1 << j) & i) {
    	            path.push_back(nums[j]);
    	        }
    	    }
    	    result.push_back(path);
    	}
    	return result;
    }
};
