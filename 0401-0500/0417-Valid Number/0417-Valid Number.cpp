class Solution {
public:
    /**
     * @param s the string that represents a number
     * @return whether the string is a valid number
     */
    bool isNumber(string& s) {
        // Write your code here
        int n = s.size();
        int start = 0, end = n - 1;
        while (start <= end && s[start] == ' ')
        {
            ++start;
        }
        
        if (start > end)
        {
            return false;
        }
        
        while (start <= end && s[end] == ' ')
        {
            --end;
        }
        
        if (s[start] == '+' || s[start] == '-')
        {
            ++start;
        }
        
        bool num = false, exp = false, dot = false;
        while (start <= end)
        {
            char c = s[start];
            if (isdigit(c))
            {
                num = true;
            }
            else if (c == '+' || c == '-')
            {
                if (s[start - 1] != 'e')
                {
                    return false;
                }
            }
            else if (c == 'e')
            {
                if (exp || !num)
                {
                    return false;
                }
                exp = true;
                num = false;
            }
            else if (c == '.')
            {
                if (exp || dot)
                {
                    return false;
                }
                dot = true;
            }
            else
            {
                return false;
            }
            ++start;
        }
        
        return num;
    }
};
