class Solution {
public:
    /*
     * @param s1: A string
     * @param s2: Another string
     * @return: whether s2 is a scrambled string of s1
     */
    bool isScramble(string s1, string s2) {
        // write your code here
        if (s1.size() != s2.size()) {
            return false;
        }
        
        if (s1 == s2) {
            return true;
        }
        
        vector<int> table(128);
        for (char c : s1) {
            ++table[c];
        }
        
        for (char c : s2) {
            if (--table[c] < 0) {
                return false;
            }
        }
        
        int n = s1.size();
        for (int i = 1; i < s1.size(); ++i) {
            if (isScramble(s1.substr(0, i), s2.substr(0, i)) && isScramble(s1.substr(i), s2.substr(i))) {
                return true;
            }
            
            if (isScramble(s1.substr(0, i), s2.substr(n - i)) && isScramble(s1.substr(i), s2.substr(0, n - i))) {
                return true;
            }
        }
        
        return false;
    }
};
