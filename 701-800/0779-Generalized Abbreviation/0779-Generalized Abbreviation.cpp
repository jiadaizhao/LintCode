class Solution {
public:
    /**
     * @param word: the given word
     * @return: the generalized abbreviations of a word
     */
    vector<string> generateAbbreviations(string &word) {
        // Write your code here
        vector<string> result;
        string path;
        dfs(word, 0, path, false, result);
        reverse(result.begin(), result.end());
        return result;
    }
    
private:
    void dfs(string &word, int start, string &path, bool prevNum, vector<string> &result) {
        if (start == word.size()) {
            result.push_back(path);
            return;
        }
        
        int len = path.size();
        path += word[start];
        dfs(word, start + 1, path, false, result);
        path.resize(len);
        
        if (!prevNum) {
            for (int i = start; i < word.size(); ++i) {
                path += to_string(i - start + 1);
                dfs(word, i + 1, path, true, result);
                path.resize(len);
            }
        }
    }
};
