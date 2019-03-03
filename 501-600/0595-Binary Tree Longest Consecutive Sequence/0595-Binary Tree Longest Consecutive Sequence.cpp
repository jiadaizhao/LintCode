/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    /**
     * @param root the root of binary tree
     * @return the length of the longest consecutive sequence path
     */
    int longestConsecutive(TreeNode* root) {
        // Write your code here
        maxLen = 0;
        conLength(root);
        return maxLen;
    }
private:
    int maxLen;
    int conLength(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int len = 1;
        int leftLen = conLength(root->left);
        if (root->left && root->left->val == root->val + 1) {
            len += leftLen;
        }
        int rightLen = conLength(root->right);
        if (root->right && root->right->val == root->val + 1) {
            len = max(len, 1 + rightLen);
        }
        
        maxLen = max(maxLen, len);
        return len;
    }
};
