/**
 * Definition of ExpressionTreeNode:
 * class ExpressionTreeNode {
 * public:
 *     string symbol;
 *     ExpressionTreeNode *left, *right;
 *     ExpressionTreeNode(string symbol) {
 *         this->symbol = symbol;
 *         this->left = this->right = NULL;
 *     }
 * }
 */


class Solution {
public:
    /*
     * @param expression: A string array
     * @return: The root of expression tree
     */
    ExpressionTreeNode * build(vector<string> &expression) {
        // write your code here
        vector<string> postexp = infixToPostfix(expression);
        stack<ExpressionTreeNode*> St;
        for (string &exp : postexp) {
            if (isOperand(exp)) {
                St.push(new ExpressionTreeNode(exp));
            }
            else {
                ExpressionTreeNode* node = new ExpressionTreeNode(exp);
                node->right = St.top();
                St.pop();
                node->left = St.top();
                St.pop();
                St.push(node);
            }
        }
        
        return !St.empty() ? St.top() : nullptr;
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
