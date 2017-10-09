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
     * @param value: Remove the node with given value.
     * @return: The root of the binary search tree after removal.
     */
    TreeNode* removeNode(TreeNode* root, int value) {
        // write your code here
        TreeNode dummy(-1);
        dummy.left = root;
        TreeNode* parent = &dummy;
        TreeNode* p = root;
        while (p)
        {
            if (p->val == value)
            {
                break;
            }
            parent = p;
            if (p->val < value)
            {
                p = p->right;
            }
            else
            {
                p = p->left;
            }
        }
        
        if (p == nullptr)
        {
            return dummy.left;
        }
        
        if (p->right == nullptr)
        {
            if (parent->left == p)
            {
                parent->left = p->left;
            }
            else
            {
                parent->right = p->left;
            }
            delete p;
        }
        else if (p->right->left == nullptr)
        {
            if (parent->left == p)
            {
                parent->left = p->right;
            }
            else
            {
                parent->right = p->right;
            }
            p->right->left = p->left;
            delete p;
        }
        else
        {
            parent = p->right;
            TreeNode* curr = p->right->left;
            while (curr->left)
            {
                parent = curr;
                curr = curr->left;
            }
            p->val = curr->val;
            parent->left = curr->right;
            delete curr;
        }
        
        return dummy.left;
    }
};
