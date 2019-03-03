class Solution {
public:
    /**
     * @param matrix: the given matrix
     * @return: the largest possible sum
     */
    int maxSubmatrix(vector<vector<int>> &matrix) {
        // write your code here
        int n = matrix.size();
        if (n == 0) return 0;
        int maxSum = INT_MIN;
        for (int l = 0; l < n; ++l) {
            vector<int> sums(n);
            for (int r = l; r < n; ++r) {
                for (int i = 0; i < n; ++i) {
                    sums[i] += matrix[i][r];
                }
                int sum = 0;
                for (int i = 0; i < n; ++i) {
                    sum += sums[i];
                    maxSum = max(maxSum, sum);
                    if (sum < 0) sum = 0;
                }
            }
        }
        return maxSum;
    }
};
