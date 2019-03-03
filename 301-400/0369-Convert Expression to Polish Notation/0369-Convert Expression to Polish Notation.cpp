class Solution {
public:
    /**
     * @param expression: A string array
     * @return: The Polish notation of this expression
     */
    vector<string> convertToPN(vector<string> &expression) {
        // write your code here
        vector<string> result;

        stack<string> St;
        for (int i = expression.size() - 1; i >= 0; --i) {
            if (isOperand(expression[i])) {
                result.push_back(expression[i]);
            }
            else if (expression[i] == ")") {
                St.push(expression[i]);
            }
            else if (expression[i] == "(") {
                while (!St.empty() && St.top() != ")") {
                    result.push_back(St.top());
                    St.pop();
                }
                St.pop();
            }
            else {
                while (!St.empty() && precedence(expression[i]) < precedence(St.top())) {
                    result.push_back(St.top());
                    St.pop();
                }
                St.push(expression[i]);
            }
        }
        
        while (!St.empty())
        {
            result.push_back(St.top());
            St.pop();
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
    
private:
    bool isOperand(string s) {
        return s.size() && s[0] >= '0' && s[1] <= '9';
    }
    
    int precedence(string s) {
        if (s == "+" || s == "-") {
            return 1;
        }
        else if (s == "*" || s == "/") {
            return 2;
        }
        else {
            return 0;
        }
    }
};
