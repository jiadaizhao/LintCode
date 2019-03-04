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
     * @param root: The root of binary tree.
     * @return: Preorder in vector which contains node values.
     */
    vector<int> preorderTraversal(TreeNode *root) {
        // write your code here
        vector<int> result;
        if (root == nullptr)
        {
            return result;
        }
        stack<TreeNode*> St;
        St.push(root);
        while (!St.empty())
        {
            TreeNode *p= St.top();
            St.pop();
            result.push_back(p->val);
            if (p->right)
            {
                St.push(p->right);
            }
            if (p->left)
            {
                St.push(p->left);
            }
        }
        
        return result;
    }
};
