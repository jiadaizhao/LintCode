class Solution {
public:
    /**
     * @param A: An integer matrix
     * @return: The index of the peak
     */
    vector<int> findPeakII(vector<vector<int> >& A) {
        // write your code here
        return helper(A, 1, 1, A.size() - 2, A[0].size() - 2, true);
    }
    
private:
    vector<int> helper(vector<vector<int> >& A, int x1, int y1, int x2, int y2, bool horizontal) {
        int row = (x1 + x2) / 2;
        int col = (y1 + y2) / 2;
        if (horizontal)
        {
            int maxCol = y1;
            for (int j = y1 + 1; j <= y2; ++j)
            {
                if (A[row][j] > A[row][maxCol])
                {
                    maxCol = j;
                }
            }
            
            if (A[row - 1][maxCol] > A[row][maxCol])
            {
                return helper(A, x1, y1, row - 1, y2, !horizontal);
            }
            else if (A[row + 1][maxCol] > A[row][maxCol])
            {
                return helper(A, row + 1, y1, x2, y2, !horizontal);
            }
            else
            {
                return {row, maxCol};
            }
        }
        else
        {
            int maxRow = x1;
            for (int i = x1 + 1; i <= x2; ++i)
            {
                if (A[i][col] > A[maxRow][col])
                {
                    maxRow = i;
                }
            }
            
            if (A[maxRow][col - 1] > A[maxRow][col])
            {
                return helper(A, x1, y1, x2, col - 1, !horizontal);
            }
            else if (A[maxRow][col + 1] > A[maxRow][col])
            {
                return helper(A, x1, col + 1, x2, y2, !horizontal);
            }
            else
            {
                return {maxRow, col};
            }
        }
    }
};
