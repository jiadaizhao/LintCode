class Solution {
public:
    /**
     * @param s: the given expression
     * @return: the result of expression
     */
    int calculate(string &s) {
        // Write your code here
        stack<int> vals, ops;
        int num = 0, sign = 1, res = 0;
        for (char c : s) {
            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            }
            else {
                res += sign * num;
                num = 0;
                if (c == '+') {
                    sign = 1;
                }
                else if (c == '-') {
                    sign = -1;
                }
                else if (c == '(') {
                    vals.push(res);
                    ops.push(sign);
                    res = 0;
                    sign = 1;
                }
                else if (c == ')') {
                    res = vals.top() + ops.top() * res;
                    vals.pop();
                    ops.pop();
                }
            }                
        }
        
        res += sign * num;
        
        return res;
    }
};
