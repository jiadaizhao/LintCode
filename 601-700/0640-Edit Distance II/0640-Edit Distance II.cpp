class Solution {
public:
    /*
     * @param s: a string
     * @param t: a string
     * @return: true if they are both one edit distance apart or false
     */
    bool isOneEditDistance(string &s, string &t) {
        // write your code here
        int m = s.size();
        int n = t.size();
        if (m > n) {
            return isOneEditDistance(t, s);
        }
        
        if (n - m > 1) {
            return false;
        }
        
        for (int i = 0; i < m; ++i) {
            if (s[i] != t[i]) {
                if (m != n) {
                    return s.substr(i) == t.substr(i + 1);
                }
                else {
                    return s.substr(i + 1) == t.substr(i + 1);
                }
            }
        }
        
        return m != n;
    }
};
