class Solution {
public:
    /**
     * @param string: An array of Char
     * @param length: The true length of the string
     * @return: The true length of new string
     */
    int replaceBlank(char string[], int length) {
        // Write your code here
        if (string == nullptr)
        {
            return 0;
        }
        int countSpace = 0;
        int countOther = 0;
        char *p = string;
        while (*p)
        {
            if (*p == ' ')
            {
                ++countSpace;
            }
            else
            {
                ++countOther;
            }
            ++p;
        }
        
        int total = countSpace + countOther;
        int n = countSpace * 3 + countOther;
        string[n] = '\0';
        for (int i = total - 1, j = n - 1; i >= 0; --i)
        {
            if (string[i] == ' ')
            {
                string[j--] = '0';
                string[j--] = '2';
                string[j--] = '%';
            }
            else
            {
                string[j--] = string[i];
            }
        }
        
        return n;
    }
};  
