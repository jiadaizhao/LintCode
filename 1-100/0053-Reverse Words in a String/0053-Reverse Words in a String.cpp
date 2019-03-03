class Solution {
public:
    /**
     * @param s : A string
     * @return : A string
     */
    string reverseWords(string s) {
        // write your code here
        string result;
        reverse(s.begin(), s.end());
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] != ' ')
            {
                if (result.size())
                {
                    result += ' ';
                }
                
                int j = result.size();
                while (i < s.size() && s[i] != ' ')
                {
                    result += s[i++];
                }
                
                reverse(result.begin() + j, result.end());
            }
        }
        
        return result;
    }
};
