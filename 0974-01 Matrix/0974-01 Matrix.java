public class Solution {
    /**
     * @param matrix: a 0-1 matrix
     * @return: return a matrix
     */
    public int[][] updateMatrix(int[][] matrix) {
        // write your code here
        int m = matrix.length;
        if (m == 0) {
            return matrix;
        }
        
        int n = matrix[0].length;
        int[][] dist = new int[m][n];
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                dist[i][j] = Integer.MAX_VALUE - 10000;
                if (matrix[i][j] != 0) {
                    if (j > 0) {
                        dist[i][j] = Math.min(dist[i][j], 1 + dist[i][j - 1]);
                    } 
                    if (i > 0) {
                        dist[i][j] = Math.min(dist[i][j], 1 + dist[i - 1][j]);
                    }
                }
                else {
                    dist[i][j] = 0;
                }
            }
        }
                
        for (int i = m - 1; i >= 0; --i) {
            for (int j = n - 1; j >= 0; --j) {
                if (matrix[i][j] != 0) {
                    if (j < n - 1) {
                        dist[i][j] = Math.min(dist[i][j], 1 + dist[i][j + 1]);
                    } 
                    if (i < m - 1) {
                        dist[i][j] = Math.min(dist[i][j], 1 + dist[i + 1][j]);
                    }
                }
            }
        }
        
        return dist;
    }
}
