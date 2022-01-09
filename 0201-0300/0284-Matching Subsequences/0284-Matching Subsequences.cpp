class Solution {
public:
    /**
     * @param source: A string
     * @param words: A list of string
     * @return: return list of words[i] that is a subsequence of source.
     */
    vector<string> MatchingSubsequences(string &source, vector<string> &words) {
        // write your code here
        unordered_map<char, vector<pair<int, int>>> table;
        for (int i = 0; i < words.size(); ++i) {
            table[words[i][0]].emplace_back(i, 0);
        }
        
        vector<int> index;
        for (char c : source) {
            auto p = table[c];
            table[c].clear();
            for (auto it : p) {
                ++it.second;
                if (it.second == words[it.first].size()) {
                    index.push_back(it.first);
                }
                else {
                    table[words[it.first][it.second]].emplace_back(it);
                }
            }
        }
        sort(index.begin(), index.end());
        vector<string> result;
        for (int i : index) {
            result.push_back(words[i]);
        }
        return result;
    }
};
