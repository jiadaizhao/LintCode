class Solution {
public:
    /**
     * @param matrix, a list of lists of integers
     * @param target, an integer
     * @return a boolean, indicate whether matrix contains target
     */
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        // write your code here
        int m = matrix.size();
        if (m == 0)
        {
            return false;
        }
        
        int n = matrix[0].size();
        int start = 0, end = m * n - 1;
        while (start + 1 < end)
        {
            int mid = start + (end - start) / 2;
            int row = mid / n;
            int col = mid % n;
            if (matrix[row][col] == target)
            {
                return true;
            }
            else if (matrix[row][col] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        
        return matrix[start / n][start % n] == target ||
               matrix[end / n][end % n] == target;
    }
};
