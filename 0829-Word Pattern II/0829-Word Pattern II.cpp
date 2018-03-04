class Solution {
public:
    /**
     * @param pattern: a string,denote pattern string
     * @param str: a string, denote matching string
     * @return: a boolean
     */
    bool wordPatternII(string &pattern, string &str) {
        // write your code here
        return dfs(pattern, 0, str, 0);
    }
    
private:
    unordered_map<string, char> strToPattern;
    unordered_set<char> used;
    bool dfs(string& pattern, int pstart, string& str, int sstart) {
        if (pstart == pattern.size()) {
            return sstart == str.size();
        }
        
        for (int i = sstart; i < str.size() && str.size() - i >= pattern.size() - pstart; ++i) {
            string temp = str.substr(sstart, i - sstart + 1);
            if (strToPattern.count(temp)) {
                if (strToPattern[temp] != pattern[pstart]) {
                    continue;
                }
                else if (dfs(pattern, pstart + 1, str, i + 1)) {
                    return true;
                }
            }
            else if (!strToPattern.count(temp) && used.count(pattern[pstart])) {
                continue;
            }
            else {
                strToPattern[temp] = pattern[pstart];
                used.insert(pattern[pstart]);
                if (dfs(pattern, pstart + 1, str, i + 1)) {
                    return true;
                }
                else {
                    strToPattern.erase(temp);
                    used.erase(pattern[pstart]);
                }
            }
        }
        return false;
    }
};
