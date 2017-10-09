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
     * @return: True if this Binary tree is Balanced, or false.
     */
    bool isBalanced(TreeNode *root) {
        // write your code here
        int h = 0;
        return helper(root, h);
    }
private:
    bool helper(TreeNode* root, int& h)
    {
        if (root == nullptr)
        {
            return true;
        }
        int lh = 0, rh = 0;
        bool lb = helper(root->left, lh);
        bool rb = helper(root->right, rh);
        h = 1 + max(lh, rh);
        return (lb && rb && abs(lh - rh) <= 1);
    }
};
