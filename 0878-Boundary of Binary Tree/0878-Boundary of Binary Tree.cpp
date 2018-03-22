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
     * @param root: a TreeNode
     * @return: a list of integer
     */
    vector<int> boundaryOfBinaryTree(TreeNode * root) {
        // write your code here
        vector<int> result;
        if (root == nullptr) return result;
        result.push_back(root->val);
        addLeftBoundary(root->left, result);
        addLeaves(root->left, result);
        addLeaves(root->right, result);
        addRightBoundary(root->right, result);
        return result;
    }
    
private:
    void addLeftBoundary(TreeNode* root, vector<int>& result) {
        if (root == nullptr || root->left == nullptr && root->right == nullptr)
            return;
        result.push_back(root->val);
        if (root->left) {
            addLeftBoundary(root->left, result);
        }
        else {
            addLeftBoundary(root->right, result);
        }
    }
    
    void addRightBoundary(TreeNode* root, vector<int>& result) {
        if (root == nullptr || root->left == nullptr && root->right == nullptr)
            return;
        
        if (root->right) {
            addRightBoundary(root->right, result);
        }
        else {
            addRightBoundary(root->left, result);
        }
        result.push_back(root->val);
    }
    
    void addLeaves(TreeNode* root, vector<int>& result) {
        if (root == nullptr) return;
        if (root->left == nullptr && root->right == nullptr) {
            result.push_back(root->val);
        }
        else {
            addLeaves(root->left, result);
            addLeaves(root->right, result);
        }
    }
};
