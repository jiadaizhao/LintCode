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
     * @param root the root of binary tree.
     * @return an integer
     */
    int maxPathSum2(TreeNode *root) {
        // Write your code here
        if (root == nullptr)
        {
            return 0;
        }
        
        int maxLeft = maxPathSum2(root->left);
        int maxRight = maxPathSum2(root->right);
        return max(root->val, root->val + max(maxLeft, maxRight));
    }
};
