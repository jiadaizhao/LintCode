class Solution {
public:
    /**
     * @param A an integer arrays sorted in ascending order
     * @param B an integer arrays sorted in ascending order
     * @param k an integer
     * @return an integer
     */
    int kthSmallestSum(vector<int>& A, vector<int>& B, int k) {
        // Write your code here
        int m = A.size();
        int n = B.size();
        priority_queue<Cell> pq;
        int result;
        pq.emplace(0, 0, A[0] + B[0]);
        while (k--) {
            Cell c = pq.top();
            pq.pop();
            result = c.val;
            if (c.col1 == 0 && c.col2 < n - 1) {
                pq.emplace(c.col1, c.col2 + 1, A[c.col1] + B[c.col2 + 1]);
            }
            if (c.col1 < m - 1) {
                pq.emplace(c.col1 + 1, c.col2, A[c.col1 + 1] + B[c.col2]);
            }
        }
        
        return result;
    }
    
private:
    struct Cell {
        int col1;
        int col2;
        int val;
        Cell (int c1, int c2, int v): col1(c1), col2(c2), val(v) {}
        bool operator < (const Cell &c) const {
            return val > c.val;
        }
    };
};
