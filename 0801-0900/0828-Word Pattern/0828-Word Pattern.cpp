class Solution {
public:
    /**
     * @param pattern: a string, denote pattern string
     * @param str: a string, denote matching string
     * @return: an boolean, denote whether the pattern string and the matching string match or not
     */
    bool wordPattern(string &pattern, string &str) {
        // write your code here
        int n = pattern.size();
        stringstream ss(str);
        string s;
        int i = 0;
        unordered_map<string, char> strToPattern;
        unordered_set<char> used;
        while (getline(ss, s, ' ')) {
            if (i >= n) {
                return false;
            }
            bool exist = strToPattern.count(s);
            if (exist && strToPattern[s] != pattern[i]) {
                return false;
            }
            
            if (!exist && used.count(pattern[i])) {
                return false;
            }
            strToPattern[s] = pattern[i];
            used.insert(pattern[i]);
            ++i;
        }
        return i == n;
    }
};
