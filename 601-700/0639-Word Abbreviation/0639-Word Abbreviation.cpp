class Solution {
public:
    /**
     * @param dict: an array of n distinct non-empty strings
     * @return: an array of minimal possible abbreviations for every word
     */
    vector<string> wordsAbbreviation(vector<string> &dict) {
        // write your code here
        int n = dict.size();
        unordered_map<string, int> table;
        vector<int> prefix(n, 1);
        vector<string> result(n);
        for (int i = 0; i < n; ++i) {
            string s = getAbbr(dict[i], prefix[i]);
            result[i] = s;
            ++table[s];
        }
        
        bool unique = true;
        do {
            unique = true;
            for (int i = 0; i < n; ++i) {
                if (table[result[i]] > 1) {
                    string s = getAbbr(dict[i], ++prefix[i]);
                    result[i] = s;
                    ++table[s];
                    unique = false;
                }
            }
            
        } while (!unique);
        
        return result;
    }
    
private:
    string getAbbr(string& s, int prefix) {
        if (prefix >= int(s.size()) - 2) {
            return s;
        }
        return s.substr(0, prefix) + to_string(s.size() - 1 - prefix) + s.back(); 
    }
};
