class Solution {
public:
    /*
     * @param : an array of arrays
     * @return: the sum of all unique weighted paths
     */
    int uniqueWeightedPaths(vector<vector<int>>& grid) {
        // write your codes here
        int m = grid.size();
        if (m == 0) {
            return 0;
        }
        int n = grid[0].size();
        if (n == 0) {
            return 0;
        }
        vector<unordered_set<int>> sum(n, unordered_set<int>());
        sum[0].insert(grid[0][0]);
        for (int j = 1; j < n; ++j) {
            sum[j].insert(*(sum[j - 1].begin()) + grid[0][j]);
        }
        
        for (int i = 1; i < m; ++i) {
            int t = *(sum[0].begin());
            sum[0].erase(t);
            sum[0].insert(t + grid[i][0]);
            for (int j = 1; j < n; ++j) {
                unordered_set<int> temp;
                for (auto it = sum[j - 1].begin(); it != sum[j - 1].end(); ++it) {
                    temp.insert(*it + grid[i][j]);
                }
                
                for (auto it = sum[j].begin(); it != sum[j].end(); ++it) {
                    temp.insert(*it + grid[i][j]);
                }
                
                sum[j] = temp;
            }
        }
        
        int total = 0;
        for (auto it = sum[n - 1].begin(); it != sum[n - 1].end(); ++it) {
            total += *it;
        }
        
        return total;
    }
};