class Solution {
public:
    /**
     * @param s: the given expression
     * @return: the result of expression
     */
    int calculate(string &s) {
        // Write your code here
        int n = s.size();
        stack<int> St;
        int num = 0, i = 0;
        char preOp = '+';
        while (i < n) {
            if (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            }
            if (i == n - 1 || (!isdigit(s[i]) && s[i] != ' ')) {
                if (preOp == '+') {
                    St.push(num);
                }
                else if (preOp == '-') {
                    St.push(-num);
                }
                else if (preOp == '*') {
                    int temp = St.top();
                    St.pop();
                    St.push(temp * num);
                }
                else {
                    int temp = St.top();
                    St.pop();
                    St.push(temp / num);
                }
                preOp = s[i];
                num = 0;
            }
            ++i;
        }
        
        int result = 0;
        while (!St.empty()) {
            result += St.top();
            St.pop();
        }
        
        return result;
    }
};
