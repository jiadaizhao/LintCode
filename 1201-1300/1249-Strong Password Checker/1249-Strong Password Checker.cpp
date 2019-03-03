#include <vector>
#include <algorithm>
class Solution {
public:
    /**
     * @param s: a string
     * @return: return an integer
     */
    int strongPasswordChecker(string &s) {
        // write  your code here
        int res = 0, n = s.size(), lower = 1, upper = 1, digit = 1;
        vector<int> table(n);
            
        int i = 0;
        while (i < n) {
            if (islower(s[i])) {
                lower = 0;
            }
            else if (isupper(s[i])) {
                upper = 0;
            }
            else if (isdigit(s[i])) {
                digit = 0;
            }
            int j = i;
            while (i < n && s[i] == s[j]) {
                ++i;
            }
            table[j] = i - j;
        }
        
        int missing = lower + upper + digit;
        if (n < 6) {
            int diff = 6 - n;
            res = diff + max(0, missing - diff);
        }
        else {
            int over = max(n - 20, 0), left = 0;
            res = over;
            for (int k = 1; k < 3; ++k) {
                for (int i = 0; i < n && over > 0; ++i) {
                    if (table[i] >= 3 && table[i] % 3 == (k - 1)) {
                        table[i] -= min(over, k);
                        over -= k;
                    }
                }
            }
            
            for (int i = 0; i < n; ++i) {
                if (table[i] >= 3 && over > 0) {
                    int need = table[i] - 2;
                    table[i] -= over;
                    over -= need;
                }
                
                if (table[i] >= 3) {
                    left += table[i] / 3;
                }
            }
            
            res += max(missing, left);
        }
        
        return res;
    }
};
