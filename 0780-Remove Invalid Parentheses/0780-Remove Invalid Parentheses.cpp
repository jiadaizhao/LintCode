class Solution {
public:
    /**
     * @param s: The input string
     * @return: all possible results
     */
    vector<string> removeInvalidParentheses(string &s) {
        // Write your code here
        vector<string> result;
        dfs(s, 0, 0, '(', ')', result);
        return result;
    }
    
private:
    void dfs(string s, int lastLeft, int lastRight, char left, char right, vector<string>& result) {
        int bal = 0;
        for (int i = lastLeft; i < s.size(); ++i) {
            if (s[i] == left) {
                ++bal;
            }
            else if (s[i] == right) {
                --bal;
            }
            
            if (bal < 0) {
                for (int j = lastRight; j <= i; ++j) {
                    if (s[j] == right && (j == lastRight || s[j - 1] != right)) {
                        dfs(s.substr(0, j) + s.substr(j + 1), i, j, left, right, result);
                    }
                }
                return;
            }
        }
        
        string rev(s);
        reverse(rev.begin(), rev.end());
        if (left == '(') {
            dfs(rev, 0, 0, ')', '(', result);
        }
        else {
            result.push_back(rev);
        }
    }
};
