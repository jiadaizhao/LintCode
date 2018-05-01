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
     * @param root: the given tree
     * @return: the number of uni-value subtrees.
     */
    int countUnivalSubtrees(TreeNode * root) {
        // write your code here
        int count = 0;
        isUnivalSubtree(root, count);
        return count;
    }
    
private:
    bool isUnivalSubtree(TreeNode* root, int& count) {
        if (root == nullptr) {
            return true;
        }
        
        bool left = isUnivalSubtree(root->left, count);
        bool right = isUnivalSubtree(root->right, count);
        if (left && right) {
            if (root->left && root->val != root->left->val) {
                return false;
            }
            
            if (root->right && root->val != root->right->val) {
                return false;
            }
            
            ++count;
            return true;
        }

        return false;
    }
};
