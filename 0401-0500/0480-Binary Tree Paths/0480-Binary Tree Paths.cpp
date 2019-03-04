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
     * @param root the root of the binary tree
     * @return all root-to-leaf paths
     */
    vector<string> binaryTreePaths(TreeNode* root) {
        // Write your code here
        vector<string> result;
        dfs(root, "", result);
        return result;
    }
private:
    void dfs(TreeNode* root, string path, vector<string>& result)
    {
        if (root == nullptr)
        {
            return;
        }
        
        path += ((path == "") ? "" : "->") + to_string(root->val);
        if (root->left == nullptr && root->right == nullptr)
        {
            result.push_back(path);
        }
        else
        {
            dfs(root->left, path, result);
            dfs(root->right, path, result);
        }
    }
};
