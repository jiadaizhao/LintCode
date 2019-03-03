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
     * @param root: a TreeNode, the root of the binary tree
     * @return: nothing
     */
    void flatten(TreeNode *root) {
        // write your code here
        if (root == nullptr)
        {
            return;
        }
        stack<TreeNode*> St;
        St.push(root);
        while (!St.empty())
        {
            TreeNode* p = St.top();
            St.pop();
            if (p->right)
            {
                St.push(p->right);
            }
            
            if (p->left)
            {
                St.push(p->left);
            }
            p->right = (!St.empty()) ? St.top() : nullptr;
            p->left = nullptr;
        }
    }
};
