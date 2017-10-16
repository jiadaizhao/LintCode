class Solution {
public:
    /*
     * @param matrix: a matrix of integers
     * @param k: An integer
     * @return: the kth smallest number in the matrix
     */
    int kthSmallest(vector<vector<int>> matrix, int k) {
        // write your code here
        priority_queue<Cell> pq;
        int m = matrix.size();
        int n = matrix[0].size();
        pq.emplace(0, 0, matrix[0][0]);
        int result;
        while (k--) {
            Cell cell = pq.top();
            pq.pop();
            int row = cell.row;
            int col = cell.col;
            result = cell.val;
            if (row < m - 1) {
                pq.emplace(row + 1, col, matrix[row + 1][col]);
            }
            
            if (row == 0 && col < n - 1) {
                pq.emplace(row, col + 1, matrix[row][col + 1]);
            }
        }
        
        return result;
    }
    
private:
    struct Cell {
        int row;
        int col;
        int val;
        Cell(int r, int c, int v): row(r), col(c), val(v) {}
        bool operator < (const Cell &c) const {
            return val > c.val;
        }
    };
};
