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
     * @return: An integer
     */
    int minDepth(TreeNode *root) {
        // write your code here
        if (root == nullptr)
        {
            return 0;
        }
        
        int minLeftDepth = minDepth(root->left);
        int minRightDepth = minDepth(root->right);
        
        if (minLeftDepth == 0)
        {
            return 1 + minRightDepth;
        }
        else if (minRightDepth == 0)
        {
            return 1 + minLeftDepth;
        }
        else
        {
            return 1 + min(minLeftDepth, minRightDepth);
        }
    }
};
