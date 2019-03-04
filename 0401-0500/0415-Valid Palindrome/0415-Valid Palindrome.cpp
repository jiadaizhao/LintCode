class Solution {
public:
    /**
     * @param s A string
     * @return Whether the string is a valid palindrome
     */
    bool isPalindrome(string& s) {
        // Write your code here
        if (s.size() == 0)
        {
            return true;
        }
        
        int start = 0, end = s.size() - 1;
        while (start < end)
        {
            while (start < end && !isalnum(s[start]))
            {
                ++start;
            }
            
            while (start < end && !isalnum(s[end]))
            {
                --end;
            }
            
            if (tolower(s[start]) != tolower(s[end]))
            {
                return false;
            }
            
            ++start;
            --end;
        }
        
        return true;
    }
};
