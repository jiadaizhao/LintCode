class Solution {
public:
    /*
     * @param : a given string
     * @param : another given string
     * @return: An array of missing string
     */
    vector<string> missingString(string str1, string str2) {
        // Write your code here
        if (str2.size() < str1.size()) {
            return missingString(str2, str1);
        }
        
        stringstream ss1(str1);
        string s;
        unordered_set<string> table;
        while (getline(ss1, s, ' ')) {
            table.insert(s);
        }
        
        vector<string> result;
        stringstream ss2(str2);
        while (getline(ss2, s, ' ')) {
            if (table.find(s) == table.end()) {
                result.push_back(s);
            }
        }
        
        return result;
    }
};
