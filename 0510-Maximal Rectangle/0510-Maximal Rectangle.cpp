class Solution {
public:
    /*
     * @param matrix: a boolean 2D matrix
     * @return: an integer
     */
    int maximalRectangle(vector<vector<bool>> &matrix) {
        // write your code here
        int m = matrix.size();
        if (m == 0) {
            return 0;
        }
        
        int n = matrix[0].size();
        vector<int> height(1 + n);
        int maxArea = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (matrix[i][j]) {
                    ++height[j];
                }
                else {
                    height[j] = 0;
                }
            }
            
            stack<int> St;
            for (int j = 0; j < height.size(); ++j) {
                while (!St.empty() && height[St.top()] >= height[j]) {
                    int h = height[St.top()];
                    St.pop();
                    int w = St.empty() ? j : j - St.top() - 1;
                    maxArea = max(maxArea, h * w);
                }
                St.push(j);
            }
        }
        
        return maxArea;
    }
};
