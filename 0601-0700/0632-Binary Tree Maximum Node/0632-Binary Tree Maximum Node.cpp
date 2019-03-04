class Solution {
public:
    /*
     * @param root: the root of tree
     * @return: the max node
     */
    TreeNode * maxNode(TreeNode * root) {
        // write your code here
        if (root == nullptr) {
            return nullptr;
        }
        
        TreeNode *maxTreeNode = root;
        TreeNode *left = maxNode(root->left);
        if (left && left->val > maxTreeNode->val) {
            maxTreeNode = left;
        }
        TreeNode *right = maxNode(root->right);
        if (right && right->val > maxTreeNode->val) {
            maxTreeNode = right;
        }
        return maxTreeNode;
    }
};
