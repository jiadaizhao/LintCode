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
     * @param root: the root
     * @return: the same tree where every subtree (of the given tree) not containing a 1 has been removed
     */
    TreeNode * pruneTree(TreeNode * root) {
        // Write your code here
        return contain1(root) ? root : nullptr;
    }
    
private:
    bool contain1(TreeNode* root) {
        if (root == nullptr) {
            return false;
        }
        
        bool left = contain1(root->left);
        bool right = contain1(root->right);
        if (!left) {
            root->left = nullptr;
        }
        if (!right) {
            root->right = nullptr;
        }
        return left || right || root->val == 1;
    }
};
