class Solution {
public:
    /**
     * @param str: the string
     * @param dict: the dictionary
     * @return: return words which  are subsequences of the string
     */
    vector<string> findWords(string &str, vector<string> &dict) {
        // Write your code here.
        vector<pair<int, int>> table[26];
        for (int i = 0; i < dict.size(); ++i) {
            table[dict[i][0] - 'a'].emplace_back(i, 0);
        }
        
        vector<int> index;
        for (char c : str) {
            auto p = table[c - 'a'];
            table[c - 'a'].clear();
            for (auto it : p) {
                ++it.second;
                if (it.second == dict[it.first].size()) {
                    index.push_back(it.first);
                }
                else {
                    table[dict[it.first][it.second] - 'a'].emplace_back(it);
                }
            }
        }
        sort(index.begin(), index.end());
        vector<string> result;
        for (int i : index) {
            result.push_back(dict[i]);
        }
        return result;
    }
};
