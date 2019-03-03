class Solution {
public:
    /*
     * @param s: the IP string
     * @return: All possible valid IP addresses
     */
    vector<string> restoreIpAddresses(string &s) {
        // write your code here
        vector<string> result;
        if (s.size() < 4 || s.size() > 12) {
            return result;
        }
        dfs(s, 0, 0, "", result);
        return result;
    }
    
private:
    void dfs(string &s, int start, int num, string path, vector<string> &result) {
        if (num == 4) {
            if (start == s.size()) {
                result.push_back(path);
            }
            return;
        }
        
        if (path.size()) {
            path += ".";
        }
        for (int i = start; i < start + 3 && i < s.size() && s.size() - 1 - i >= 3 - num; ++i) {
            string sub = s.substr(start, i - start + 1);
            if (sub.size() > 1 && sub[0] == '0') {
                break;
            }
            if (sub.size() == 3 && sub > "255") {
                break;
            }
            dfs(s, i + 1, num + 1, path + sub, result);
        }
    }
};
