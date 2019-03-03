class Solution {
public:
    /**
     * @param s: A string
     * @return: A list of lists of string
     */
    vector<vector<string>> partition(string s) {
        // write your code here
        vector<vector<string>> result;
        int n = s.size();
        if (n == 0) {
            return result;
        }
        
        vector<vector<bool>> isPalindrome(n, vector<bool>(n));
        for (int j = 0; j < n; ++j) {
            for (int i = j; i >= 0; --i) {
                if (s[i] == s[j] && (j - i < 2 || isPalindrome[i + 1][j - 1])) {
                    isPalindrome[i][j] = true;
                }
            }
        }
        vector<string> path;
        dfs(s, 0, isPalindrome, path, result);
        return result;
    }
private:
    void dfs(string& s, int start, vector<vector<bool>>& isPalindrome,
              vector<string>& path, vector<vector<string>>& result) {
        if (start == s.size()) {
            result.push_back(path);
            return;
        }
        
        for (int i = start; i < s.size(); ++i)
        {
            if (isPalindrome[start][i])
            {
                path.push_back(s.substr(start, i - start + 1));
                dfs(s, i + 1, isPalindrome, path, result);
                path.pop_back();
            }
        }
    }
};
