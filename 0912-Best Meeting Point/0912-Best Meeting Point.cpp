class Solution {
public:
    /**
     * @param grid: a 2D grid
     * @return: the minimize travel distance
     */
    int minTotalDistance(vector<vector<int>> &grid) {
        // Write your code here
        int m = grid.size();
        if (m == 0) return 0;
        int n = grid[0].size();
        vector<int> rows, cols;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 1) {
                    rows.push_back(i);
                }
            }
        }
        
        for (int j = 0; j < n; ++j) {
            for (int i = 0; i < m; ++i) {
                if (grid[i][j] == 1) {
                    cols.push_back(j);
                }
            }
        }
        
        return totalDistance(rows) + totalDistance(cols);
    }
    
private:
    int totalDistance(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;
        int sum = 0;
        while (start < end) {
            sum += nums[end] - nums[start];
            ++start;
            --end;
        }
        
        return sum;
    }
};
