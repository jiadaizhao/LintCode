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
     * @return: True if the binary tree is BST, or false
     */
    bool isValidBST(TreeNode *root) {
        // write your code here
        TreeNode* prev = nullptr;
        stack<TreeNode*> St;
        TreeNode *p = root;
        while (p || !St.empty())
        {
            if (p)
            {
                St.push(p);
                p = p->left;
            }
            else
            {
                p = St.top();
                St.pop();
                if (prev && p->val <= prev->val)
                {
                    return false;
                }
                prev = p;
                p = p->right;
            }
        }
        return true;
    }
};
