class NumMatrix {
public:
    /**
     * @return: nothing
     */
    NumMatrix(vector<vector<int>> matrix) {
        // Write your code here
        m = matrix.size();
        if (m == 0) return;
        n = matrix[0].size();
        matrixCopy = vector<vector<int>>(m, vector<int>(n));
        bit = vector<vector<int>>(1 + m, vector<int>(1 + n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                update(i, j, matrix[i][j]);
            }
        }
    }
    void update(int row, int col, int val){
        int diff = val - matrixCopy[row][col];
        if (diff == 0) return;
        matrixCopy[row][col] = val;
        for (int i = row + 1; i <= m; i += i & (-i)) {
            for (int j = col + 1; j <= n; j += j & (-j)) {
                bit[i][j] += diff;
            }
        }
    }
    int sumRegion(int row1,int col1,int row2,int col2){
        return read(row2 + 1, col2 + 1) - read(row2 + 1, col1) - read(row1, col2 + 1) + read(row1, col1);
    }
    
private:
    vector<vector<int>> matrixCopy;
    vector<vector<int>> bit;
    int m, n;
    int read(int row, int col) {
        int sum = 0;
        for (int i = row; i > 0; i -= i & (-i)) {
            for (int j = col; j > 0; j -= j & (-j)) {
                sum += bit[i][j];
            }
        }
        return sum;
    }
};
