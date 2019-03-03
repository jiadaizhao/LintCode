class ValidWordAbbr {
public:
    /*
    * @param dictionary: a list of words
    */ValidWordAbbr(vector<string> dictionary) {
        // do intialization if necessary
        for (string s : dictionary) {
            string key = getKey(s);
            if (table.find(key) != table.end()) {
                if (table[key] != s) {
                    table[key] = "";
                }                
            }
            else {
                table[key] = s;
            }
        }
    }

    /*
     * @param word: a string
     * @return: true if its abbreviation is unique or false
     */
    bool isUnique(string &word) {
        // write your code here
        string key = getKey(word);
        return table.find(key) == table.end() || table[key] == word;
    }
    
private:
    unordered_map<string, string> table;
    string getKey(string s) {
        if (s.size() <= 2) {
            return s;
        }
        
        return s[0] + to_string(s.size() - 2) + s[s.size() - 1];
    }
};

/**
 * Your ValidWordAbbr object will be instantiated and called as such:
 * ValidWordAbbr obj = new ValidWordAbbr(dictionary);
 * bool param = obj.isUnique(word);
 */
