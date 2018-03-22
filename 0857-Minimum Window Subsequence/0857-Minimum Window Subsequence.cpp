class Solution {
public:
    /**
     * @param S: a string
     * @param T: a string
     * @return: the minimum substring of S
     */
    string minWindow(string &S, string &T) {
        // Write your code here
        int m = S.size(), n = T.size();
        vector<vector<int>> start(1 + m, vector<int>(1 + n, -1));
        for (int i = 0; i <= m; ++i) {
            start[i][0] = i;
        }
        
        string result;
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (S[i - 1] == T[j - 1]) {
                    start[i][j] = start[i - 1][j - 1];
                }
                else {
                    start[i][j] = start[i - 1][j];
                }
            }
            
            if (start[i][n] != -1 && (result == "" || i - start[i][n] < result.size())) {
                result = S.substr(start[i][n], i - start[i][n]);
            }
        }
        
        return result;
    }
};
