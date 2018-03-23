class Solution {
public:
    /**
     * @param expression: a string, denote the ternary expression
     * @return: a string
     */
    string parseTernary(string &expression) {
        // write your code here
        stack<char> St;
        for (int i = expression.size() - 1; i >= 0; --i) {
            char c = expression[i];
            if (!St.empty() && St.top() == '?') {
                St.pop();
                if (c == 'T') {
                    char temp = St.top();
                    St.pop();
                    St.pop();
                    St.push(temp);
                }
                else {
                    St.pop();
                }
            }
            else if (c != ':') {
                St.push(c);
            }
        }
        return string(1, St.top());
    }
};
