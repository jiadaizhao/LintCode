class Solution {
public:
    /**
     * @param grid a 2D grid
     * @return an integer
     */
    int shortestDistance(vector<vector<int>>& grid) {
        // Write your code here
        int m = grid.size();
        if (m == 0) {
            return -1;
        }
        int n = grid[0].size();
        
        vector<int> rows, cols;
        bool hasZero = false;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j]) {
                    rows.push_back(i);
                } else {
                    hasZero = true;
                }
            }
        }
        
        if (!hasZero) {
            return -1;
        }
        
        if (rows.size() == 0) {
            return 0;
        }
        
        for (int j = 0; j < n; ++j) {
            for (int i = 0; i < m; ++i) {
                if (grid[i][j]) {
                    cols.push_back(j);
                }
            }
        }
        
        vector<int> sumRow(rows.size() + 1);
        vector<int> sumCol(cols.size() + 1);
        
        for (int i = 1; i < sumRow.size(); ++i) {
            sumRow[i] = sumRow[i - 1] + rows[i - 1];
        }
        
        for (int i = 1; i < sumCol.size(); ++i) {
            sumCol[i] = sumCol[i - 1] + cols[i - 1];
        }
        
        
        int minDist = INT_MAX;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 0) {
                    minDist = min(minDist, getDistance(rows, sumRow, i) + getDistance(cols, sumCol, j));
                }
            }
        }
        
        return minDist;
    }
private:
    int getDistance(vector<int>& distance, vector<int>& sum, int pos) {
        int n = distance.size();
        int start = 0, end = n - 1;
        while (start + 1 < end) {
            int mid = start + (end - start) / 2;
            if (distance[mid] <= pos) {
                start = mid;
            } else {
                end = mid - 1;
            }
        }
        
        int index;
        if (distance[end] <= pos) {
            index = end;
        } else if (distance[start] <= pos) {
            index = start;
        } else {
            index = -1;
        }
        
        return  (index + 1) * pos  - sum[index + 1] +
                sum[n] - sum[index + 1] - (n - index - 1) * pos;
    }
};
