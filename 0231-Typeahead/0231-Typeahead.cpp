class Typeahead {
public:
    // @param dict: A dictionary of words dict
    Typeahead(unordered_set<string> &dict) {
        // do initialize if necessary
        for (string str : dict)
        {
            int n = str.size();
            for (int i = 0; i < n; ++i)
            {
                for (int j = i + 1; j <= n; ++j)
                {
                    string s = str.substr(i, j - i);
                    if (words.find(s) == words.end() || words[s].back() != str)
                    {
                        words[s].push_back(str);
                    }
                }
            }
        }
    }
    
    // @param str: a string
    // @return a set of words
    vector<string> search(string &str) {
        // Write your code here
        return words[str];
    }
    
private:
    unordered_map<string, vector<string>> words;
};
