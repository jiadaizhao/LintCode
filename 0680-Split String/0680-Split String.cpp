class Solution {
public:
    /*
     * @param : a string to be split
     * @return: all possible split string array
     */
    vector<vector<string>> splitString(string& s) {
        // write your code here
        vector<vector<string>> result;
        vector<string> path;
        dfs(s, 0, path, result);
        return result;
    }
    
private:
    void dfs(string& s, int start, vector<string>& path, vector<vector<string>>& result) {
        if (start == s.size()) {
            result.push_back(path);
            return;
        }
        
        for (int i = start; i < s.size() && i < start + 2; ++i) {
            string str = s.substr(start, i - start + 1);
            path.push_back(str);
            dfs(s, i + 1, path, result);
            path.pop_back();
        }
    }
};
