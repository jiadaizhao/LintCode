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
    int maxPathSum(TreeNode *root) {
        // write your code here
        int maxSum = INT_MIN;
        helper(root, maxSum);
        return maxSum;
    }

private:
    int helper(TreeNode* root, int& maxSum) {
        if (root == nullptr) {
            return 0;
        }

        int leftSum = max(helper(root->left, maxSum), 0);
        int rightSum = max(helper(root->right, maxSum), 0);

        maxSum = max(maxSum, leftSum + rightSum + root->val);
        return max(leftSum, rightSum) + root->val;
    }
};
