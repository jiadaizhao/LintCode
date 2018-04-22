class Solution {
public:
    /**
     * @param s: the expression string
     * @return: the answer
     */
    int calculate(string &s) {
        // Write your code here
        stack<int> vals;
        stack<char> ops;
        int sign = 1;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == ' ') {
                continue;
            }
            if (isdigit(s[i])) {
                int num = 0;
                while (i < s.size() && isdigit(s[i])) {
                    num = num * 10 + (s[i++] - '0');
                }
                --i;
                vals.push(sign * num);
                sign = 1;
            }
            else if (s[i] == '(') {
                ops.push(s[i]);
            }
            else if (s[i] == ')') {
                while (ops.top() != '(') {
                    int b = vals.top();
                    vals.pop();
                    int a = vals.top();
                    vals.pop();
                    char op = ops.top();
                    ops.pop();
                    vals.push(apply(a, b, op));
                }
                ops.pop();
            }
            else {
                if (s[i] == '-' && (i == 0 || s[i - 1] == '(')) {
                    sign = -1;
                }
                else {
                    while (!ops.empty() && ops.top() != '(' && precedence(s[i]) <= precedence(ops.top())) {
                        int b = vals.top();
                        vals.pop();
                        int a = vals.top();
                        vals.pop();
                        char op = ops.top();
                        ops.pop();
                        vals.push(apply(a, b, op));
                    }
                    ops.push(s[i]);
                }                
            }
        }
        
        while (!ops.empty()) {
            int b = vals.top();
            vals.pop();
            int a = vals.top();
            vals.pop();
            char op = ops.top();
            ops.pop();
            vals.push(apply(a, b, op));
        }
        
        return vals.top();
    }
    
private:
    int apply(int a, int b, char op) {
        if (op == '+')
            return a + b;
        else if (op == '-')
            return a - b;
        else if (op == '*')
            return a * b;
        else
            return a / b;
    }
    
    int precedence(char op) {
        if (op == '+' || op == '-')
            return 1;
        else
            return 2;
    }
};
