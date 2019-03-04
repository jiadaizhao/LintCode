/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param s: a string
     * @return: a root of this tree
     */
    TreeNode * str2tree(string &s) {
        // write your code here
        if (s.size() == 0) {
            return nullptr;
        }
        int i = 0;
        return helper(s, i);
    }
    
private:
    TreeNode* helper(string& s, int& i) {
        int num = 0, sign = 1;
        if (s[i] == '-') {
            sign = -1;
            ++i;
        }
        
        while (i < s.size() && isdigit(s[i])) {
            num = num * 10 + (s[i++] - '0');
        }
        TreeNode* root = new TreeNode(sign * num);
        if (i < s.size() && s[i] == '(') {
            ++i;
            root->left = helper(s, i);
            ++i;
            if (i < s.size() && s[i] == '(') {
                ++i;
                root->right = helper(s, i);
                ++i;
            }
        }
        return root;
    }
};
