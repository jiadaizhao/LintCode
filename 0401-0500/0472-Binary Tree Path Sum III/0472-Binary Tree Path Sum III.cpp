/**
 * Definition of ParentTreeNode:
 * class ParentTreeNode {
 * public:
 *     int val;
 *     ParentTreeNode *parent, *left, *right;
 * }
 */
class Solution {
public:
    /**
     * @param root the root of binary tree
     * @param target an integer
     * @return all valid paths
     */
    vector<vector<int>> binaryTreePathSum3(ParentTreeNode *root, int target) {
        // Write your code here
        vector<vector<int>> result;
        dfs(root, target, result);
        return result;
    }
private:
    void dfs(ParentTreeNode* root, int target, vector<vector<int>>& result) {
        if (root == nullptr)
        {
            return;
        }
        
        vector<int> path;
        findSum(root, nullptr, target, path, result);
        
        dfs(root->left, target, result);
        dfs(root->right, target, result);
    }
    
    void findSum(ParentTreeNode* root, ParentTreeNode* prev, int target, 
                 vector<int>& path, vector<vector<int>>& result) {
        path.push_back(root->val);
        target -= root->val;
        if (target == 0) {
            result.push_back(path);
        }
        
        if (root->parent && root->parent != prev) {
            findSum(root->parent, root, target, path, result);
        }
        
        if (root->left && root->left != prev) {
            findSum(root->left, root, target, path, result);
        }
        
        if (root->right && root->right != prev) {
            findSum(root->right, root, target, path, result);
        }
        
        path.pop_back();         
    }
};
