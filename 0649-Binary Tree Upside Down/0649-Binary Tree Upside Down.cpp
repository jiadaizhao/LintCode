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
     * @param root: the root of binary tree
     * @return: new root
     */
    TreeNode * upsideDownBinaryTree(TreeNode * root) {
        // write your code here
        if (root == nullptr || root->left == nullptr) {
            return root;
        }
        TreeNode* curr = root;
        TreeNode* prev = nullptr;
        TreeNode* prevRight = nullptr;
        while (curr) {
            TreeNode* next = curr->left;
            curr->left = prevRight;
            prevRight = curr->right;
            curr->right = prev;
            
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
};
