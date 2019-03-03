class Solution {
public:
    /**
     * @param s: a string represent DNA sequences
     * @return: all the 10-letter-long sequences 
     */
    vector<string> findRepeatedDna(string &s) {
        // write your code here
        int n = s.size();
        unordered_map<string, int> table;
        vector<string> result;
        for (int i = 0; i < n - 9; ++i) {
            string str = s.substr(i, 10);
            if (table[str]++ == 1) {
                result.push_back(str);
            }
        }
        return result;
    }
};
