class Solution {
public:
    /*
     * @param : the given tree
     * @return: Whether it is a full tree
     */
    bool isFullTree(TreeNode * root) {
        // write your code here
        if (root == nullptr) {
            return true;
        }
        
        if ((root->left != nullptr && root->right == nullptr) ||
            (root->left == nullptr && root->right != nullptr)) {
            return false;
        }
        
        return isFullTree(root->left) && isFullTree(root->right);
    }
};
