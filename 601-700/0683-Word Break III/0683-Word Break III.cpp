class Solution {
public:
    /*
     * @param : A string
     * @param : A set of word
     * @return: the number of possible sentences.
     */
    int wordBreak3(string& s, unordered_set<string>& dict) {
        // Write your code here
        if (table.find(s) != table.end()) {
            return table[s];
        }
        
        int count = 0;
        if (dict.find(s) != dict.end()) {
            ++count;
        }
        
        for (int i = 1; i < s.size(); ++i) {
            string str = s.substr(i);
            if (dict.find(str) != dict.end()) {
                string prefix = s.substr(0, i);
                count += wordBreak3(prefix, dict);
            }
        }
        
        return table[s] = count;
    }
    
private:
    unordered_map<string, int> table;
};
