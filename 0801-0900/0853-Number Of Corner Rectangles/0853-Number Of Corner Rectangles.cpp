class Solution {
public:
    /**
     * @param grid: the grid
     * @return: the number of corner rectangles
     */
    int countCornerRectangles(vector<vector<int>> &grid) {
        // Write your code here
        int m = grid.size(), n = grid[0].size(), count = 0;
        for (int i = 0; i < m - 1; ++i) {
            for (int j = i + 1; j < m; ++j) {
                int num = 0;
                for (int k = 0; k < n; ++k) {
                    if (grid[i][k] == 1 && grid[j][k] == 1) {
                        ++num;
                    }
                }
                count += num * (num - 1) / 2;
            }
        }
        
        return count;
    }
};
