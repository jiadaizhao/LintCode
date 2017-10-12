class Solution {
public:
    /*
     * @param matrix: An array of integers
     * @return: An array of integers
     */
    vector<int> printZMatrix(vector<vector<int>> &matrix) {
        // write your code here
        int m = matrix.size();
        if (m == 0) {
            return {};
        }
        int n = matrix[0].size();
        vector<int> result(m * n);
        int row = 0, col = 0;
        bool up = true;
        for (int i = 0; i < result.size(); ++i) {
            result[i] = matrix[row][col];
            if (up) {
                if (row - 1 >= 0 && col + 1 < n) {
                    --row;
                    ++col;
                }
                else if (col + 1 < n) {
                    ++col;
                    up = false;
                }
                else {
                    ++row;
                    up = false;
                }
            }
            else {
                if (row + 1 < m && col - 1 >= 0) {
                    ++row;
                    --col;
                }
                else if (row + 1 < m) {
                    ++row;
                    up = true;
                }
                else {
                    ++col;
                    up = true;
                }
            }
        }
        
        return result;
    }
};
