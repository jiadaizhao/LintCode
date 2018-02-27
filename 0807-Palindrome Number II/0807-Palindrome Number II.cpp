class Solution {
public:
    /**
     * @param n: non-negative integer n
     * @return: return whether a binary representation of a non-negative integer n is a palindrome.
     */
    bool isPalindrome(int n) {
        // Write your code here
        if (n == 0) return true;
        string s;
        while (n) {
            s += '0' + n & 1;
            n >>= 1;
        }
        
        int start = 0, end = s.size() - 1;
        while (start < end) {
            if (s[start] != s[end]) {
                return false;
            }
            ++start;
            --end;
        }
        return true;
    }
};
