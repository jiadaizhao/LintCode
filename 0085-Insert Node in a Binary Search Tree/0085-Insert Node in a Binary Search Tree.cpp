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
     * @param root: The root of the binary search tree.
     * @param node: insert this node into the binary search tree
     * @return: The root of the new binary search tree.
     */
    TreeNode* insertNode(TreeNode* root, TreeNode* node) {
        // write your code here
        if (root == nullptr)
        {
            return node;
        }
        
        TreeNode* parent = nullptr;
        TreeNode* p = root;
        bool left = true;
        while (p)
        {
            parent = p;
            if (p->val <= node->val)
            {
                p = p->right;
                left = false;
            }
            else
            {
                p = p->left;
                left = true;
            }
        }
        
        if (left)
        {
            parent->left = node;
        }
        else
        {
            parent->right = node;
        }
        
        return root;
    }
};

class Solution {
public:
    /*
     * @param root: The root of the binary search tree.
     * @param node: insert this node into the binary search tree
     * @return: The root of the new binary search tree.
     */
    TreeNode * insertNode(TreeNode * root, TreeNode * node) {
        // write your code here
        if (root == nullptr) {
            return node;
        }
        
        if (node->val < root->val) {
            root->left = insertNode(root->left, node);
        }
        else {
            root->right = insertNode(root->right, node);
        }
        return root;
    }
};
