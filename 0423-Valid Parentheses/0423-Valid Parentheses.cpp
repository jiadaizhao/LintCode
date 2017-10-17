class Solution {
public:
    /**
     * @param s A string
     * @return whether the string is a valid parentheses
     */
    bool isValidParentheses(string& s) {
        // Write your code here
        stack<char> St;
        for (char c : s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                St.push(c);
            }
            else if (c == ')')
            {
                if (St.empty() || St.top() != '(')
                {
                    return false;
                }
                St.pop();
            }
            else if (c == '}')
            {
                if (St.empty() || St.top() != '{')
                {
                    return false;
                }
                St.pop();
            }
            else if (c == ']')
            {
                if (St.empty() || St.top() != '[')
                {
                    return false;
                }
                St.pop();
            }
        }
        
        return St.empty();
    }
};
