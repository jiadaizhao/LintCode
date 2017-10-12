class Solution {
public:
    /*
     * @param matrix: A lsit of lists of integers
     * @return: 
     */
    void setZeroes(vector<vector<int>> &matrix) {
        // write your code here
        int m = matrix.size();
        if (m == 0)
        {
            return;
        }
        
        int n = matrix[0].size();
        bool firstRowHasZero = false, firstColHasZero = false;
        for (int j = 0; j < n; ++j)
        {
            if (matrix[0][j] == 0)
            {
                firstRowHasZero = true;
                break;
            }
        }
        
        for (int i = 0; i < m; ++i)
        {
            if (matrix[i][0] == 0)
            {
                firstColHasZero = true;
            }
        }
        
        for (int i = 1; i < m; ++i)
        {
            for (int j = 1; j < n; ++j)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        
        for (int i = 1; i < m; ++i)
        {
            for (int j = 1; j < n; ++j)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
        
        if (firstRowHasZero)
        {
            for (int j = 0; j < n; ++j)
            {
                matrix[0][j] = 0;
            }
        }
        
        if (firstColHasZero)
        {
            for (int i = 0; i < m; ++i)
            {
                matrix[i][0] = 0;
            }
        }
    }
};
