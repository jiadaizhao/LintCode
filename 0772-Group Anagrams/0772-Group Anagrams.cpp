class Solution {
public:
    /**
     * @param strs: the given array of strings
     * @return: The anagrams which have been divided into groups
     */
    vector<vector<string>> groupAnagrams(vector<string> &strs) {
        // write your code here
        unordered_map<string, vector<string>> table;
        for (string str : strs) {
            string s(str);
            sort(s.begin(), s.end());
            table[s].push_back(str);
        }
        
        vector<vector<string>> result;
        for (auto t : table) {
            sort(t.second.begin(), t.second.end());
            result.push_back(t.second);
        }
        
        return result;
    }
};
