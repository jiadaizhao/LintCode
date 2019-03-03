class Solution {
public:
    /*
     * @param expression: a list of strings
     * @return: an integer
     */
    int evaluateExpression(vector<string> &expression) {
        // write your code here
        vector<string> postexp = infixToPostfix(expression);
        stack<int> St;
        for (string &exp : postexp) {
            if (isOperand(exp)) {
                St.push(stoi(exp));
            }
            else {
                int data2 = St.top();
                St.pop();
                int data1 = St.top();
                St.pop();
                if (exp == "+") {
                    St.push(data1 + data2);
                }
                else if (exp == "-") {
                    St.push(data1 - data2);
                }
                else if (exp == "*") {
                    St.push(data1 * data2);
                }
                else if (exp == "/") {
                    St.push(data1 / data2);
                }
            }
        }
        return !St.empty() ? St.top() : 0;
    }
    
private:
    bool isOperand(string &s) {
        return s.size() && s[0] >= '0' && s[0] <= '9';
    }
    
    int precedence(string& s) {
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
    
    vector<string> infixToPostfix(vector<string> &expression) {
        vector<string> result;
        stack<string> St;
        for (string &exp : expression) {
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
                St.pop(); // pop "("
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
};
