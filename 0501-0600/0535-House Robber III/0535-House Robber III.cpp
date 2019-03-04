/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * }
 */
class Solution {
public:
    /**
     * @param root: The root of binary tree.
     * @return: The maximum amount of money you can rob tonight
     */
    int houseRobber3(TreeNode* root) {
        // write your code here
        vector<int> result = helper(root);
        return max(result[0], result[1]);
    }
    
private:
    vector<int> helper(TreeNode* root) {
        vector<int> result(2);
        if (root == nullptr) {
            return result;
        }
        
        vector<int> left = helper(root->left);
        vector<int> right = helper(root->right);
        result[0] = root->val + left[1] + right[1];
        result[1] = max(left[0], left[1]) + max(right[0], right[1]);
        return result;
    }
};
