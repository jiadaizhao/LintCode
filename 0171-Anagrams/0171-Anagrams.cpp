class Solution {
public:
    /*
     * @param strs: A list of strings
     * @return: A list of strings
     */
    vector<string> anagrams(vector<string> &strs) {
        // write your code here
        unordered_map<string, vector<string>> table;
        for (string& str : strs) {
            string temp(str);
            sort(temp.begin(), temp.end());
            table[temp].push_back(str);
        }
        
        vector<string> result;
        for (auto it = table.begin(); it != table.end(); ++it) {
            if (it->second.size() > 1) {
                for (string& s : it->second) {
                    result.push_back(s);
                }
            }
        }
        return result;
    }
};
