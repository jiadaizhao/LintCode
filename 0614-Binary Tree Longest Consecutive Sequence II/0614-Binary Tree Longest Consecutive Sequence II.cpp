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
    int longestConsecutive2(TreeNode* root) {
        // Write your code here
        int downLen = 0, upLen = 0, maxLen = 0;
        helper(root, downLen, upLen, maxLen);
        return maxLen;
    }

private:
    void helper(TreeNode* root, int& downLen, int& upLen, int& maxLen) {
        if (root == nullptr) {
            return;
        }

        int ldownLen = 0, lupLen = 0;
        helper(root->left, ldownLen, lupLen, maxLen);
        int rdownLen = 0, rupLen = 0;
        helper(root->right, rdownLen, rupLen, maxLen);
        
        if (root->left && root->val == root->left->val - 1) {
            downLen = ldownLen + 1;
        }
        
        if (root->left && root->val == root->left->val + 1) {
            upLen = lupLen + 1;
        }
        
        if (root->right && root->val == root->right->val - 1) {
            downLen = max(downLen, rdownLen + 1);
        }
        
        if (root->right && root->val == root->right->val + 1) {
            upLen = max(upLen, rupLen + 1);
        }
        
        maxLen = max(maxLen, downLen + 1 + upLen);
    }
};
