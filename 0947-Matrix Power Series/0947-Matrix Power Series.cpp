class Solution {
public:
    /**
    * @param A: a n x n matrix
    * @param k: a integer
    * @param m: a integer
    * @return: return a 2D arrays, denote S matrix
    */
    vector<vector<int>> matrixPowerSeries(vector<vector<int>> &A, int k, int m) {
        // write your code here
        return sum(A, k, m);
    }

private:
    vector<vector<int>> add(const vector<vector<int>>& a, const vector<vector<int>>& b, int MOD) {
        int m = a.size(), n = a[0].size();
        vector<vector<int>> result(m, vector<int>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                result[i][j] = (a[i][j] + b[i][j] + MOD) % MOD;
            }
        }
        return result;
    }

    vector<vector<int>> multiply(const vector<vector<int>>& a, const vector<vector<int>>& b, int MOD) {
        int m = a.size(), n = a[0].size(), p = b[0].size();
        vector<vector<int>> result(m, vector<int>(p));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < p; ++j) {
                for (int k = 0; k < n; ++k) {
                    result[i][j] = (result[i][j] + (a[i][k] * b[k][j]) % MOD + MOD) % MOD;
                }
            }
        }
        return result;
    }

    vector<vector<int>> power(const vector<vector<int>>& A, int k, int MOD) {
        int n = A.size();
        vector<vector<int>> a(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                a[i][j] = A[i][j];
            }
        }
        vector<vector<int>> result(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            result[i][i] = 1;
        }
        while (k) {
            if (k & 1) {
                result = multiply(result, a, MOD);
            }
            a = multiply(a, a, MOD);
            k >>= 1;
        }
        return result;
    }

    vector<vector<int>> sum(const vector<vector<int>>& a, int k, int MOD) {
        if (k == 1) {
            return a;
        }
        int n = a.size();
        vector<vector<int>> result = sum(a, k / 2, MOD);
        if (k & 1) {
            vector<vector<int>> temp = power(a, k / 2 + 1, MOD);
            result = add(result, multiply(result, temp, MOD), MOD);
            result = add(result, temp, MOD);

        }
        else {
            vector<vector<int>> temp = power(a, k / 2, MOD);
            result = add(result, multiply(result, temp, MOD), MOD);
        }
        return result;
    }
};
