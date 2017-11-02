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
     * @return the root of the minimum subtree
     */
    TreeNode* findSubtree(TreeNode* root) {
        // Write your code here
        if (root == nullptr) {
            return nullptr;
        }
        
        minSum = INT_MAX;
        minSumRoot = nullptr;
        sumTree(root);
        return minSumRoot;
    }
private:
    TreeNode* minSumRoot;
    int minSum;
    int sumTree(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        
        int sum = sumTree(root->left) + sumTree(root->right) + root->val;
        if (sum < minSum) {
            minSumRoot = root;
            minSum = sum;
        }
        return sum;
    }
};
