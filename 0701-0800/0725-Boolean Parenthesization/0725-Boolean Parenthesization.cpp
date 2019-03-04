class Solution {
public:
    /*
     * @param symb: the array of symbols
     * @param oper: the array of operators
     * @return: the number of ways
     */
    int countParenth(string &symb, string &oper) {
        // write your code here
        string s;
        for (int i = 0; i < oper.size(); ++i) {
            s += symb[i];
            s += oper[i];
        }
        
        s += symb.back();
        int n = s.size();
        vector<vector<int>> dpTrue(n, vector<int>(n));
        vector<vector<int>> dpFalse(n, vector<int>(n));
        
        for (int i = 0; i < n; i += 2) {
            if (s[i] == 'T') {
                dpTrue[i][i] = 1;
            }
            else {
                dpFalse[i][i] = 1;
            }
        }
        
        for (int l = 3; l <= n; l += 2) {
            for (int i = 0; i < n - l + 1; i += 2) {
                int j = i + l - 1;
                for (int k = i + 1; k < j; k += 2) {
                    if (s[k] == '&') {
                        dpTrue[i][j] += dpTrue[i][k - 1] * dpTrue[k + 1][j];
                        dpFalse[i][j] += dpFalse[i][k - 1] * dpTrue[k + 1][j] +
                                         dpTrue[i][k - 1] * dpFalse[k + 1][j] +
                                         dpFalse[i][k - 1] * dpFalse[k + 1][j];
                    }
                    else if (s[k] == '|') {
                        dpTrue[i][j] += dpTrue[i][k - 1] * dpTrue[k + 1][j] +
                                        dpTrue[i][k - 1] * dpFalse[k + 1][j] +
                                        dpFalse[i][k - 1] * dpTrue[k + 1][j];
                        dpFalse[i][j] += dpFalse[i][k - 1] * dpFalse[k + 1][j];
                    }
                    else {
                        dpTrue[i][j] += dpTrue[i][k - 1] * dpFalse[k + 1][j] +
                                        dpFalse[i][k - 1] * dpTrue[k + 1][j];
                                        
                        dpFalse[i][j] += dpFalse[i][k - 1] * dpFalse[k + 1][j] +
                                         dpTrue[i][k - 1] * dpTrue[k + 1][j];
                    }
                }
            }
        }
        
        return dpTrue[0][n - 1];
    }
};
