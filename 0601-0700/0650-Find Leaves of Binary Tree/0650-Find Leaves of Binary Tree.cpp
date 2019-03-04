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
    /*
     * @param root: the root of binary tree
     * @return: collect and remove all leaves
     */
    vector<vector<int>> findLeaves(TreeNode * root) {
        // write your code here
        vector<vector<int>> result;
        height(root, result);
        return result;
    }
    
private:
    int height(TreeNode* root, vector<vector<int>>& result) {
        if (root == nullptr) {
            return -1;
        }
        
        int leftHeight = height(root->left, result);
        int rightHeight = height(root->right, result);
        int h = 1 + max(leftHeight, rightHeight);
        if (result.size() <= h) {
            result.push_back({});
        }
        result[h].push_back(root->val);
        return h;
    }
};
