class Solution {
public:
    /**
     * @param words1: a list of string
     * @param words2: a list of string
     * @param pairs: a list of string pairs
     * @return: return a boolean, denote whether two sentences are similar or not
     */
    bool isSentenceSimilarity(vector<string> &words1, vector<string> &words2, vector<vector<string>> &pairs) {
        // write your code here
        if (words1.size() != words2.size()) {
            return false;
        }
        
        unordered_set<string> table;
        for (auto& p : pairs) {
            table.insert(p[0] + "#" + p[1]);
        }
        
        for (int i = 0; i < words1.size(); ++i) {
            if (words1[i] == words2[i]) {
                continue;
            }
            
            string s1 = words1[i] + "#" + words2[i];
            string s2 = words2[i] + "#" + words1[i];
            if (table.find(s1) == table.end() && table.find(s2) == table.end()) {
                return false;
            }
        }
        
        return true;
    }
};
