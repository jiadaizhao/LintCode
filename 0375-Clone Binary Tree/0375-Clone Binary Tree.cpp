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
     * @param root: The root of binary tree
     * @return root of new tree
     */
    TreeNode* cloneTree(TreeNode *root) {
        // Write your code here
        if (root == nullptr)
        {
            return nullptr;
        }
        queue<TreeNode*> Q;
        Q.push(root);
        TreeNode* nroot = new TreeNode(root->val);
        Q.push(nroot);
        while (!Q.empty())
        {
            TreeNode* node = Q.front();
            Q.pop();
            TreeNode* nodecopy = Q.front();
            Q.pop();
            if (node->left)
            {
                nodecopy->left = new TreeNode(node->left->val);
                Q.push(node->left);
                Q.push(nodecopy->left);
            }
            
            if (node->right)
            {
                nodecopy->right = new TreeNode(node->right->val);
                Q.push(node->right);
                Q.push(nodecopy->right);
            }
        }
        
        return nroot;
    }
};
