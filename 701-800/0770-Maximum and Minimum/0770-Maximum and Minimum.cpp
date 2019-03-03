class Solution {
public:
    /**
     * @param matrix: an input matrix 
     * @return: nums[0]: the maximum,nums[1]: the minimum
     */
    vector<int> maxAndMin(vector<vector<int>> &matrix) {
        // write your code here
        if (matrix.size() == 0) {
            return {};
        }
        vector<int> result = {INT_MIN, INT_MAX};
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j < matrix[i].size(); ++j) {
                result[0] = max(result[0], matrix[i][j]);
                result[1] = min(result[1], matrix[i][j]);
            }
        }
        return result;
    }
};
