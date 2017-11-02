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
     * @param root: The root of the binary tree.
     * @param A: A TreeNode
     * @param B: A TreeNode
     * @return: Return the LCA of the two nodes.
     */
    TreeNode * lowestCommonAncestor3(TreeNode * root, TreeNode * A, TreeNode * B) {
        // write your code here
        bool AE = false, BE = false;
        TreeNode* node = helper(root, A, B, AE, BE);
        if (AE && BE) {
            return node;
        }
        else {
            return nullptr;
        }
    }
    
private:
    TreeNode* helper(TreeNode* root, TreeNode* A, TreeNode* B, bool& AE, bool& BE) {
        if (root == nullptr) {
            return nullptr;
        }
        
        bool leftAE = false, rightAE = false, leftBE = false, rightBE = false;
        TreeNode* left = helper(root->left, A, B, leftAE, leftBE);
        TreeNode* right = helper(root->right, A, B, rightAE, rightBE);
        AE = (root == A) || leftAE || rightAE;
        BE = (root == B) || leftBE || rightBE;
        if (root == A || root == B) {
            return root;
        }
        if (!left) {
            return right;
        }
        else if (!right) {
            return left;
        }
        else {
            return root;
        }
    }
};
