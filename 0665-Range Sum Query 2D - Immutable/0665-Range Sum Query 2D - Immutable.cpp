class NumMatrix {
public:
    /*
    * @param matrix: a 2D matrix
    */NumMatrix(vector<vector<int>> matrix) {
        // do intialization if necessary
        int m = matrix.size();
        int n = matrix[0].size();
        sum = vector<vector<int>>(1 + m, vector<int>(1 + n));
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + matrix[i - 1][j - 1];
            }
        }
    }

    /*
     * @param row1: An integer
     * @param col1: An integer
     * @param row2: An integer
     * @param col2: An integer
     * @return: An integer
     */
    int sumRegion(int row1, int col1, int row2, int col2) {
        // write your code here
        return sum[row2 + 1][col2 + 1] - sum[row2 + 1][col1] - sum[row1][col2 + 1] + sum[row1][col1];
    }
    
private:
    vector<vector<int>> sum;
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix obj = new NumMatrix(matrix);
 * int param_1 = obj.sumRegion(row1,col1,row2,col2);
 */
