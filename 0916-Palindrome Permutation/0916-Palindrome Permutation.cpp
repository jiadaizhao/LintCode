class Solution {
public:
    /**
     * @param s: the given string
     * @return: if a permutation of the string could form a palindrome
     */
    bool canPermutePalindrome(string &s) {
        // write your code here
        vector<int> table(128);
        for (char c : s) {
            ++table[c];
        }
        
        int odd = 0;
        for (int i : table) {
            if (i % 2) {
                ++odd;
                if (odd > 1) {
                    return false;
                }
            }
        }
        
        return true;
    }
};
