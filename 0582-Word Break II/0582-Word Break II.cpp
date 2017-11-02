class Solution {
public:
    /**
     * @param s a string
     * @param wordDict a set of words
     */
    vector<string> wordBreak(string s, unordered_set<string> &wordDict) {
        // Write your code here
        if (table.find(s) != table.end()) {
            return table[s];
        }
        vector<string> result;
        if (s.size() == 0 || wordDict.size() == 0) {
            return result;
        }
        
        if (wordDict.find(s) != wordDict.end()) {
            result.push_back(s);
        }
        
        for (int i = 1; i < s.size(); ++i) {
            string str = s.substr(i);
            if (wordDict.find(str) != wordDict.end()) {
                string prefix = s.substr(0, i);
                vector<string> temp = wordBreak(prefix, wordDict);
                for (string t : temp) {
                    result.push_back(t + " " + str);
                }
            }
        }
        
        table[s] = result;
        return result;
    }
private:
    unordered_map<string, vector<string>> table;
};
