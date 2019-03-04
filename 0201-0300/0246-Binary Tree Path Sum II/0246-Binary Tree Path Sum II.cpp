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
     * @param target: An integer
     * @return: all valid paths
     */
    vector<vector<int>> binaryTreePathSum2(TreeNode * root, int target) {
        // write your code here
        vector<vector<int>> result;
        if (root == nullptr) {
            return result;
        }
        
        dfs(root, target, result);
        return result;
    }
    
private:
    void dfs(TreeNode* root, int target, vector<vector<int>>& result) {
        if (root == nullptr) {
            return;
        }
        
        vector<int> path;
        findSum(root, target, path, result);
        dfs(root->left, target, result);
        dfs(root->right, target, result);
    }
    
    void findSum(TreeNode* root, int target, vector<int>& path, vector<vector<int>>& result) {
        if (root == nullptr) {
            return;
        }
        
        path.push_back(root->val);
        target -= root->val;
        if (target == 0) {
            result.push_back(path);
        }
        
        findSum(root->left, target, path, result);
        findSum(root->right, target, path, result);
        target += root->val;
        path.pop_back();
    }
};
