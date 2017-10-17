class Solution {
public:
    /*
     * @param n: n pairs
     * @return: All combinations of well-formed parentheses
     */
    vector<string> generateParenthesis(int n) {
        // write your code here
        vector<string> result;
        dfs("", n, n, result);
        return result;
    }
    
private:
    void dfs(string path, int left, int right, vector<string>& result) {
        if (left == 0 && right == 0) {
            result.push_back(path);
            return;
        }
        
        if (left == right) {
            dfs(path + '(', left - 1, right, result);
        }
        else if (left < right) {
            if (left > 0) {
                dfs(path + '(', left - 1, right, result);
            }
            dfs(path + ')', left, right - 1, result);
        }
    }
};
