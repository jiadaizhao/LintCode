class Solution {
public:
    /**
     * @param n: a Integer
     * @return: a spiral array
     */
    vector<vector<int>> spiralArray(int n) {
        // write your code here
        vector<vector<int>> result(n, vector<int>(n));
        int startRow = 0, endRow = n - 1;
        int startCol = 0, endCol = n - 1;
        int k = 1;
        while (startRow <= endRow && startCol <= endCol) {
            for (int j = startCol; j <= endCol; ++j) {
                result[startRow][j] = k++;
            }
            ++startRow;
            for (int i = startRow; i <= endRow; ++i) {
                result[i][endCol] = k++;
            }
            --endCol;
            if (startRow <= endRow) {
                for (int j = endCol; j >= startCol; --j) {
                    result[endRow][j] = k++;
                }
                --endRow;
            }
            
            if (startCol <= endCol) {
                for (int i = endRow; i >= startRow; --i) {
                    result[i][startCol] = k++;
                }
                ++startCol;
            }
        }
        return result;
    }
};
