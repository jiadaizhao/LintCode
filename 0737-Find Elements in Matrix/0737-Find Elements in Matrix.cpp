class Solution {
public:
    /**
     * @param Matrix: the input
     * @return: the element which appears every row
     */
    int FindElements(vector<vector<int>> &Matrix) {
        // write your code here
        int m = Matrix.size(), n = Matrix[0].size();
        unordered_map<int, int> candidates;
        for (int j = 0; j < n; ++j) {
            candidates[Matrix[0][j]] = 1;
        }
        
        for (int i = 1; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (candidates[Matrix[i][j]] == i) {
                    ++candidates[Matrix[i][j]];
                    if (candidates[Matrix[i][j]] == m) {
                        return Matrix[i][j];
                    }
                }
            }
        }
        
        return -1;
    }
};
