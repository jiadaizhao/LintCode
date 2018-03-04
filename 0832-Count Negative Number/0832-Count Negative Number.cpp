class Solution {
public:
    /**
     * @param nums: the sorted matrix
     * @return: the number of Negative Number
     */
    int countNumber(vector<vector<int>> &nums) {
        // Write your code here
        int count = 0;
        int m = nums.size();
        if (m == 0) return 0;
        int n = nums[0].size();
        int row = m - 1, col = 0;
        while (row >= 0 && col < n) {
            if (nums[row][col] >= 0) {
                --row;
            }
            else {
                count += row + 1;
                ++col;
            }
        }
        return count;
    }
};
