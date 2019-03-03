class Solution {
public:
    /**
     * @param n: an integer
     * @return: return a string
     */
    string lastFourDigitsOfFn(int n) {
        // write your code here
        if (n == 0) return "0";
        vector<vector<int>> F = {{1, 1}, {1, 0}};
        power(F, n - 1);
        return to_string(F[0][0]);
    }
    
private:
    void power(vector<vector<int>>& F, int n) {
        if (n == 0 || n == 1) {
            return;
        }
        power(F, n / 2);
        multiply(F, F);
        if (n & 1) {
            vector<vector<int>> M = {{1, 1}, {1, 0}};
            multiply(F, M);
        }
    }
    
    void multiply(vector<vector<int>>& F, vector<vector<int>>& M) {
        int x = (F[0][0] * M[0][0] % 10000 + F[0][1] * M[1][0] % 10000) % 10000;
        int y = (F[0][0] * M[0][1] % 10000 + F[0][1] * M[1][1] % 10000) % 10000;
        int z = (F[1][0] * M[0][0] % 10000 + F[1][1] * M[1][0] % 10000) % 10000;
        int w = (F[1][0] * M[0][1] % 10000 + F[1][1] * M[1][1] % 10000) % 10000;
        
        F[0][0] = x;
        F[0][1] = y;
        F[1][0] = z;
        F[1][1] = w;
    }
};
