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
    /*
     * @param root: the root of binary tree
     * @return: the new root
     */
    TreeNode * convertBST(TreeNode * root) {
        // write your code here
        int sum = 0;
        helper(root, sum);
        return root;
    }
    
private:
    void helper(TreeNode* root, int& sum) {
        if (root == nullptr) {
            return;
        }
        
        helper(root->right, sum);
        sum += root->val;
        root->val = sum;
        helper(root->left, sum);
    }
};
