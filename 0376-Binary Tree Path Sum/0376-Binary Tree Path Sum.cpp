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
     * @param root the root of binary tree
     * @param target an integer
     * @return all valid paths
     */
    vector<vector<int>> binaryTreePathSum(TreeNode *root, int target) {
        // Write your code here
        vector<vector<int>> result;
        if (root == nullptr)
        {
            return result;
        }
        vector<int> path;
        dfs(root, target, path, result);
        return result;
    }
private:
    void dfs(TreeNode* root, int target, vector<int>& path, vector<vector<int>>& result)
    {
        if (root == nullptr)
        {
            return;
        }
        
        path.push_back(root->val);
        if (root->left == nullptr &&
            root->right == nullptr &&
            root->val == target)
        {
            result.push_back(path);        
        }
        dfs(root->left, target - root->val, path, result);
        dfs(root->right, target - root->val, path, result);
        path.pop_back();
    }
};
