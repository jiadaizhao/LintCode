// Reference: http://www.cnblogs.com/whatbeg/p/3971994.html

int MOD = 10000007;
class Solution {
public:
    /**
    * @param X: a list of integers
    * @param m: an integer
    * @return: return an integer
    */
    int calcTheValueOfAnm(vector<int> &X, int m) {
        // write your code here
        int n = X.size();
        if (n == 0) {
            if (m == 0) {
                return 0;
            }
            int result = 233;
            for (int j = 2; j <= m; ++j) {
                result = (result * 10 + 3) % MOD;
            }
            return result;
        }
        if (m == 0) {
            return X.back();
        }
        vector<vector<long long>> A(n + 2, vector<long long>(1));
        for (int i = 1; i <= n; ++i) {
            A[i][0] = X[i - 1];
        }

        A[0][0] = 233;
        for (int i = 1; i <= n; ++i) {
            A[i][0] = (A[i - 1][0] + A[i][0]) % MOD;
        }
        A.back()[0] = 3;
        if (m == 1) {
            return A[n][0];
        }

        vector<vector<long long>> base(2 + n, vector<long long>(2 + n));
        for (int i = 0; i <= n; ++i) {
            base[i][0] = 10;
        }

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= i; ++j) {
                base[i][j] = 1;
            }
        }

        for (int i = 0; i < n + 2; ++i) {
            base[i].back() = 1;
        }

        vector<vector<long long>> p = power(base, m - 1);
        vector<vector<long long>> result = multiply(p, A);
        return result[n][0];
    }

private:
    vector<vector<long long>> multiply(vector<vector<long long>>& a, vector<vector<long long>>& b) {
        int m = a.size(), n = a[0].size(), p = b[0].size();
        vector<vector<long long>> result(m, vector<long long>(p));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < p; ++j) {
                for (int k = 0; k < n; ++k) {
                    result[i][j] = (result[i][j] + (a[i][k] * b[k][j]) % MOD + MOD) % MOD;
                }
            }
        }
        return result;
    }

    vector<vector<long long>> power(vector<vector<long long>>& a, int n) {
        int m = a.size();
        vector<vector<long long>> result(m, vector<long long>(m));
        for (int i = 0; i < m; ++i) {
            result[i][i] = 1;
        }
        while (n) {
            if (n & 1) {
                result = multiply(result, a);
            }
            a = multiply(a, a);
            n >>= 1;
        }
        return result;
    }
};
