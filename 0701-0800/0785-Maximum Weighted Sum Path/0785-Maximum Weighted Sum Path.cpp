class Solution {
public:
    /**
     * @param nums: the n x m grid
     * @return: the maximum weighted sum
     */
    int maxWeight(vector<vector<int>> &nums) {
        // write your code here
        int m = nums.size();
        int n = nums[0].size();
        for (int j = n - 2; j >= 0; --j) {
            nums[0][j] += nums[0][j + 1];
        }
        for (int i = 1; i < m; ++i) {
            nums[i][n - 1] += nums[i - 1][n - 1];
            for (int j = n - 2; j >= 0; --j) {
                nums[i][j] += max(nums[i - 1][j], nums[i][j + 1]);
            }
        }
        
        return nums[m - 1][0];
    }
};
