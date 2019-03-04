class Solution {
public:
    /**
     * @param nums: A list of integers
     * @param k: An integer denote to find k non-overlapping subarrays
     * @return: An integer denote the sum of max k non-overlapping subarrays
     */
    int maxSubArray(vector<int> nums, int k) {
        // write your code here
        int n = nums.size();
        vector<vector<int>> local(1 + k, vector<int>(1 + n));
        vector<vector<int>> global(1 + k, vector<int>(1 + n));
        for (int i = 1; i <= k; ++i)
        {
            local[i][i - 1] = INT_MIN;
            global[i][i - 1] = INT_MIN;
            for (int j = i; j <= n; ++j)
            {
                local[i][j] = max(local[i][j - 1], global[i - 1][j - 1]) + nums[j - 1];
                global[i][j] = max(global[i][j - 1], local[i][j]);
            }
        }
        
        return global[k][n];
    }
};
