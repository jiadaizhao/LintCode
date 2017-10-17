class Solution {
public:
    /*
     * @param tokens: The Reverse Polish Notation
     * @return: the value
     */
    int evalRPN(vector<string> &tokens) {
        // write your code here
        stack<int> St;
        for (string& s : tokens) {
            if (s.size() == 1 && !isdigit(s[0])) {
                int num2 = St.top();
                St.pop();
                int num1 = St.top();
                St.pop();
                if (s == "+") {
                    St.push(num1 + num2);
                }
                else if (s == "-") {
                    St.push(num1 - num2);
                }
                else if (s == "*") {
                    St.push(num1 * num2);
                }
                else {
                    St.push(num1 / num2);
                }
            }
            else {
                St.push(stoi(s));
            }
        }
        return St.top();
    }
};
