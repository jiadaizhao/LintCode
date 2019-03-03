class Solution {
public:
    /**
     * @param arrays a list of array
     * @param k an integer
     * @return an integer, K-th largest element in N arrays
     */
    int KthInArrays(vector<vector<int>>& arrays, int k) {
        // Write your code here
        int n = arrays.size();
        for (int i = 0; i < n; ++i) {
            sort(arrays[i].begin(), arrays[i].end(), greater<int>());
        }
        
        priority_queue<Cell> pq;
        for (int i = 0; i < n; ++i) {
            if (arrays[i].size()) {
                pq.emplace(i, 0, arrays[i][0]);
            }
        }
        
        int result;
        while (k--) {
            Cell c = pq.top();
            pq.pop();
            result = c.val;
            int row = c.row;
            int col = c.col + 1;
            if (col < arrays[row].size()) {
                pq.emplace(row, col, arrays[row][col]);
            }
        }
        
        return result;
    }
    
private:
    struct Cell {
        int row;
        int col;
        int val;
        Cell (int r, int c, int v): row(r), col(c), val(v) {}
        bool operator < (const Cell& c) const {
            return val < c.val;
        }
    };
};
