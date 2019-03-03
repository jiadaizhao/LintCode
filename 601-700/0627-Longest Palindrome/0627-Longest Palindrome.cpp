class Solution {
public:
    /**
     * @param s a string which consists of lowercase or uppercase letters
     * @return the length of the longest palindromes that can be built
     */
    int longestPalindrome(string& s) {
        // Write your code here
        vector<int> table(256);
        for (char c : s) {
            ++table[c];
        }
        
        int sum = 0;
        int odd = 0;
        for (int i : table) {
            if (i % 2) {
                odd = 1;
            }
            sum += i / 2 * 2;
        }
        
        return sum + odd;
    }
};
