class Solution {
public:
    /*
     * @param s: a string
     * @param dict: a set of n substrings
     * @return: the minimum length
     */
    int minLength(string &s, unordered_set<string> &dict) {
        // write your code here
        if (s.size() == 0 || dict.size() == 0)
        {
            return s.size();
        }
        
        unordered_set<string> visited;
        queue<string> Q;
        Q.push(s);
        visited.insert(s);
        int minLen = s.size();
        while (!Q.empty()) {
            string str = Q.front();
            Q.pop();
            for (string ds : dict) {
                int found = str.find(ds);
                while (found != -1) {
                    string ns = str.substr(0, found) + str.substr(found + ds.size());
                    if (visited.find(ns) == visited.end()) {
                        if (ns.size() < minLen) {
                            minLen = ns.size();
                        }
                        Q.push(ns);
                        visited.insert(ns);
                    }
                    found = str.find(ds, found + 1);
                }
            }
        }
        
        return minLen;
    }
};
