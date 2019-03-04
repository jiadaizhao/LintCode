class Solution {
public:
    /**
     * @param matrix an integer matrix
     * @return the coordinate of the left-up and right-down number
     */
    vector<vector<int>> submatrixSum(vector<vector<int>>& matrix) {
        // Write your code here
        vector<vector<int>> result(2, vector<int>(2, -1));
        int m = matrix.size();
        if (m == 0)
        {
            return result;
        }
        
        int n = matrix[0].size();
        vector<vector<int>> sum(1 + m, vector<int>(1 + n));
        for (int i = 1; i <= m; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                sum[i][j] = matrix[i - 1][j - 1] + sum[i][j - 1] + sum[i - 1][j] - sum[i - 1][j - 1];
            }
        }
        
        for (int i = 0; i < m; ++i)
        {
            for (int j = i + 1; j <= m; ++j)
            {
                unordered_map<int, int> table;
                table[0] = 0;
                for (int k = 1; k <= n; ++k)
                {
                    int diff = sum[j][k] - sum[i][k];
                    if (table.find(diff) != table.end())
                    {
                        result[0][0] = i;
                        result[0][1] = table[diff];
                        result[1][0] = j - 1;
                        result[1][1] = k - 1;
                        return result;
                    }
                    else
                    {
                        table[diff] = k;
                    }
                }
            }
        }
        
        return result;
    }
};
