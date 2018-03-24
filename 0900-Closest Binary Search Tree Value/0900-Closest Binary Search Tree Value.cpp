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
     * @param root: the given BST
     * @param target: the given target
     * @return: the value in the BST that is closest to the target
     */
    int closestValue(TreeNode * root, double target) {
        // write your code here
        double minDiff = abs(root->val - target);
        int result = root->val;
        while (root) {
            double diff = root->val - target;
            if (diff == 0) {
                return root->val;
            }
            else if (diff < 0) {
                if (-diff < minDiff) {
                    minDiff = -diff;
                    result = root->val;
                }
                root = root->right;
            }
            else {
                if (diff < minDiff) {
                    minDiff = diff;
                    result = root->val;
                }
                root = root->left;
            }
        }
        return result;
    }
};
