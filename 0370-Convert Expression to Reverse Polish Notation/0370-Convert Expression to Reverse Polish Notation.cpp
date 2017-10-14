class Solution {
public:
    /**
     * @param expression: A string array
     * @return: The Reverse Polish notation of this expression
     */
    vector<string> convertToRPN(vector<string> &expression) {
        // write your code here
        vector<string> result;
        stack<string> St;
        for (string& exp : expression) {
            if (isOperand(exp)) {
                result.push_back(exp);
            }
            else if (exp == "(") {
                St.push(exp);
            }
            else if (exp == ")") {
                while (!St.empty() && St.top() != "(") {
                    result.push_back(St.top());
                    St.pop();
                }
                St.pop();
            }
            else {
                while (!St.empty() && precedence(exp) <= precedence(St.top())) {
                    result.push_back(St.top());
                    St.pop();
                }
                St.push(exp);
            }
        }
        
        while (!St.empty()) {
            result.push_back(St.top());
            St.pop();
        }
        
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
