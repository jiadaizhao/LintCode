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
 * Example of iterate a tree:
 * BSTIterator iterator = BSTIterator(root);
 * while (iterator.hasNext()) {
 *    TreeNode * node = iterator.next();
 *    do something for node
 */
class BSTIterator {
public:
    //@param root: The root of binary tree.
    BSTIterator(TreeNode *root) {
        // write your code here
        while (root)
        {
            St.push(root);
            root = root->left;
        }
    }

    //@return: True if there has next node, or false
    bool hasNext() {
        // write your code here
        return St.size();
    }
    
    //@return: return next node
    TreeNode* next() {
        // write your code here
        TreeNode* res = St.top();
        St.pop();
        TreeNode* node = res->right;
        while (node)
        {
            St.push(node);
            node = node->left;
        }
        return res;
    }

private:
    stack<TreeNode*> St;
};
