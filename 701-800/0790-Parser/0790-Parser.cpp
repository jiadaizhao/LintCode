class Solution {
public:
    /**
     * @param generator: Generating set of rules.
     * @param startSymbol: Start symbol.
     * @param symbolString: Symbol string.
     * @return: Return true if the symbol string can be generated, otherwise return false.
     */
    bool canBeGenerated(vector<string> &generator, char startSymbol, string &symbolString) {
        // Write your code here.
        vector<vector<string>> table(26);
        for (string s : generator) {
            table[s[0] - 'A'].push_back(s.substr(5));
        }
        
        int index = startSymbol - 'A';
        for (string s : table[index]) {
            if (dfs(symbolString, 0, s, table)) {
                return true;
            }
        }
        return false;
    }
    
private:
    bool dfs(string &symbolString, int start, string s, vector<vector<string>> &table) {
        if (start == symbolString.size()) {
            return s.size() == 0;
        }
        
        if (s.size() == 0) {
            return false;
        }
        
        if (symbolString[start] == s[0]) {
            return dfs(symbolString, start + 1, s.substr(1), table);
        }
        
        if (isupper(s[0])) {
            int index = s[0] - 'A';
            for (string str : table[index]) {
                if (dfs(symbolString, start, str + s.substr(1), table)) {
                    return true;
                }
            }
        }
        
        return false;
    }
};
