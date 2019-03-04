class Solution {
public:
    /**
     * @param A: a sparse matrix
     * @param B: a sparse matrix
     * @return: the result of A * B
     */
    vector<vector<int>> multiply(vector<vector<int>> &A, vector<vector<int>> &B) {
        // write your code here
        int m = A.size(), n = A[0].size(), p = B[0].size();
        vector<vector<int>> cols;
        for (int j = 0; j < n; ++j) {
            vector<int> col;
            for (int k = 0; k < p; ++k) {
                if (B[j][k]) {
                    col.push_back(k);
                }
            }
            cols.push_back(col);
        }
        vector<vector<int>> result(m, vector<int>(p));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (A[i][j]) {
                    for (int k : cols[j]) {
                        result[i][k] += A[i][j] * B[j][k];
                    }
                }
            }
        }
        
        return result;
    }
};
