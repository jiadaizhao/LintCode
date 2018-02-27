class Solution {
public:
    /**
     * @param n: An integer
     * @return: a list of combination
     */
    vector<vector<int>> getFactors(int n) {
        // write your code here
        vector<vector<int>> result;
        vector<int> path;
        dfs(n, 2, path, result);
        return result;
    }
    
private:
    void dfs(int n, int start, vector<int>& path, vector<vector<int>>& result) {
        for (long long i = start; i * i <= n; ++i) {
            if (n % i == 0) {
                path.push_back(i);
                dfs(n / i, i, path, result);
                path.push_back(n / i);
                result.push_back(path);
                path.pop_back();
                path.pop_back();
            }
        }
    }
};
