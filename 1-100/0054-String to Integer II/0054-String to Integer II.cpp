class Solution {
public:
    /**
     * @param str: A string
     * @return An integer
     */
    int atoi(string str) {
        // write your code here
        int n = str.size();
        if (n == 0)
        {
            return 0;
        }
        int sign = 1, result = 0;
        int i = 0;
        while (i < n && str[i] == ' ')
        {
            ++i;
        }

        if (i == n)
        {
            return 0;
        }
        
        if (str[i] == '+')
        {
            sign = 1;
            ++i;
        }
        else if (str[i] == '-')
        {
            sign = -1;
            ++i;
        }
        
        while (i < n && str[i] >= '0' && str[i] <= '9')
        {
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && str[i] - '0' > 7))
            {
                return (sign == 1) ? INT_MAX : INT_MIN; 
            }
            result = result * 10 + (str[i] - '0');
            ++i;
        }
        
        return sign * result;
    }
};
