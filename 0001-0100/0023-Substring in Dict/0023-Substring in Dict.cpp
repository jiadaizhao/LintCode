class Solution {
public:
    /**
     * @param s: a string
     * @param wordDict: A set of words.
     * @return: All correct words
     */
    vector<string> wordSubsequence(string &s, unordered_set<string> &wordDict) {
        // write your code here
        vector<string> words(wordDict.begin(), wordDict.end());
        vector<pair<int, int>> table[26];
        for (int i = 0; i < words.size(); ++i) {
            table[words[i][0] - 'a'].emplace_back(i, 0);
        }
        
        vector<string> result;
        for (char c : s) {
            auto p = table[c - 'a'];
            table[c - 'a'].clear();
            for (auto it : p) {
                ++it.second;
                if (it.second == words[it.first].size()) {
                    result.push_back(words[it.first]);
                }
                else {
                    table[words[it.first][it.second] - 'a'].emplace_back(it);
                }
            }
        }
        return result;
    }
};
