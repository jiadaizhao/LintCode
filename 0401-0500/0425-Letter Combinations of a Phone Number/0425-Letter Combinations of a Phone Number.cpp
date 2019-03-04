class Solution {
public:
    /*
     * @param digits: A digital string
     * @return: all posible letter combinations
     */
    vector<string> letterCombinations(string &digits) {
        // write your code here
        vector<string> result;
        if (digits.size() == 0) {
            return result;
        }
        vector<string> dict = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        dfs(digits, 0, "", dict, result);
        return result;
    }
    
private:
    void dfs(string &digits, int start, string path, vector<string>& dict, vector<string>& result) {
        if (start == digits.size()) {
            result.push_back(path);
            return;
        }
        
        for (char c : dict[digits[start] - '0']) {
            dfs(digits, start + 1, path + c, dict, result);
        }
    }
};
