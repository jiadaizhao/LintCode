class Solution {
public:
    /*
     * @param path: the original path
     * @return: the simplified path
     */
    string simplifyPath(string &path) {
        // write your code here
        int n = path.size();
        vector<string> St;
        int start = 0, end = 0;
        while (end < n) {
            while (end < n && path[end] != '/') {
                ++end;
            }
            string s= path.substr(start, end - start);
            if (s == "..") {
                if (!St.empty()) {
                    St.pop_back();
                }
            }
            else if (s != "" && s != ".") {
                St.push_back(s);
            }
            start = ++end;
        }
        
        if (St.empty()) {
            return "/";
        }
        string result;
        for (string s : St) {
            result += "/" + s;
        }
        return result;
    }
};
