class Solution {
public:
    /**
     * @param str: The string
     * @param k: The length of the substring
     * @return: The answer
     */
    int findSubstring(string &str, int k) {
        // Write your code here
        if (k > 26 || str.size() < k) {
            return 0;
        }
        
        unordered_set<string> table;
        for (int i = 0; i < str.size() - k + 1; ++i) {
            vector<int> count(26);
            bool valid = true;
            for (int j = i; j < i + k; ++j) {
                if (++count[str[j] - 'a'] > 1) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                table.insert(str.substr(i, k));
            }
        }
        
        return table.size();
    }
};
