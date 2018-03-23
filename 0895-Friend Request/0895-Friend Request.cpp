class Solution {
public:
    /**
     * @param words: a list of words
     * @return: a string which is correct order
     */
    string alienOrder(vector<string> &words) {
        // Write your code here
        unordered_map<char, set<char>> table;
        for (int i = 0; i < words.size(); ++i) {
            for (char c : words[i]) {
                if (!table.count(c)) {
                    table[c] = {};
                }
            }
            
            if (i > 0) {
                int j = 0;
                while (j < words[i - 1].size() && j < words[i].size()) {
                    if (words[i - 1][j] != words[i][j]) {
                        table[words[i - 1][j]].insert(words[i][j]);
                        break;
                    }
                    ++j;
                }
                if (j < words[i - 1].size() && j == words[i].size()) {
                    return "";
                }
            }
        }
        
        vector<int> degrees(26);
        for (auto t : table) {
            for (char c : t.second) {
                ++degrees[c - 'a'];
            }
        }
        
        priority_queue<char, vector<char>, greater<char>> pq;
        for (auto t : table) {
            if (degrees[t.first - 'a'] == 0) {
                pq.push(t.first);
            }
        }
        
        string result;
        while (!pq.empty()) {
            char c = pq.top();
            result += c;
            pq.pop();
            for (char nc : table[c]) {
                if (--degrees[nc - 'a'] == 0) {
                    pq.push(nc);
                }
            }
        }
        
        return (result.size() == table.size()) ? result : "";
    }
};
