class Solution {
public:
    /**
     * @param s: a string
     * @return: nothing
     */
    bool validPalindrome(string &s) {
        // Write your code here
        int start = 0, end = s.size() - 1;
        while (start < end) {
            if (s[start] != s[end]) {
                return isPalindrome(s.substr(start, end - start)) ||
                       isPalindrome(s.substr(start + 1, end - start));
            }
            else {
                ++start;
                --end;
            }
        }
        return true;
    }
    
private:
    bool isPalindrome(string s) {
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
