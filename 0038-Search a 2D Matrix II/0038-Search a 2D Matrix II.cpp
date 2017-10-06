class Solution {
public:
    /**
     * @param matrix: A list of lists of integers
     * @param target: An integer you want to search in matrix
     * @return: An integer indicate the total occurrence of target in the given matrix
     */
    int searchMatrix(vector<vector<int> > &matrix, int target) {
        // write your code here
        int m = matrix.size();
        if (m == 0)
        {
            return 0;
        }
        
        int n = matrix[0].size();
        int row = m - 1;
        int col = 0;
        int count = 0;
        while (row >= 0 && col < n)
        {
            if (matrix[row][col] < target)
            {
                ++col;
            }
            else if (matrix[row][col] > target)
            {
                --row;
            }
            else
            {
                ++count;
                ++col;
                --row;
            }
        }
        
        return count;
    }
};
