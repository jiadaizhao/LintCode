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
     * @param root: the given BST
     * @param k: the given k
     * @return: the kth smallest element in BST
     */
    int kthSmallest(TreeNode * root, int k) {
        // write your code here
        stack<TreeNode*> St;
        TreeNode* node = root;
        int result;
        while (node || !St.empty()) {
            if (node) {
                St.push(node);
                node = node->left;
            }
            else {
                node = St.top();
                St.pop();
                if (--k == 0) {
                    result = node->val;
                    break;
                }
                node = node->right;
            }
        }
        return result;
    }
};
