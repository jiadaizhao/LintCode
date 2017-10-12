class Solution {
public:
    /*
     * @param matrix: a lists of integers
     * @return: 
     */
    void rotate(vector<vector<int>> &matrix) {
        // write your code here
        reverse(matrix.begin(), matrix.end());
        int m = matrix.size();
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < i; ++j)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};
