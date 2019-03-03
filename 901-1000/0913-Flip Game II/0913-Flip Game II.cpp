class Solution {
public:
    /**
     * @param s: the given string
     * @return: if the starting player can guarantee a win
     */
    bool canWin(string &s) {
        // write your code here
        return helper(s);
    }

private:
    unordered_map<string, bool> table;    
    bool helper(string& s) {
        if (table.find(s) != table.end()) {
            return table[s];
        }
        
        int n = s.size();
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == '+' && s[i + 1] == '+') {
                s[i] = s[i + 1] = '-';
                if (!helper(s)) {
                    s[i] = s[i + 1] = '+';
                    return table[s] = true;
                }
                s[i] = s[i + 1] = '+';
            }
        }
        
        return table[s] = false;
    }
};
