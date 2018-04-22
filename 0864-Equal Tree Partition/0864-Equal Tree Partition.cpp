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
     * @return: return a boolean
     */
    bool checkEqualTree(TreeNode * root) {
        // write your code here
        int sum = getSum(root);
        if (sum == 0) {
            return table[0] > 1;
        }
        return sum % 2 == 0 && table[sum / 2] > 0;
    }
    
private:
    unordered_map<int, int> table;
    int getSum(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        
        int sum = root->val + getSum(root->left) + getSum(root->right);
        ++table[sum];
        return sum;
    }
};
