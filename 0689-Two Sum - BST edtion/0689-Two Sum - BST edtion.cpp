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
     * @param : the root of tree
     * @param : the target sum
     * @return: two number from tree witch sum is n
     */
    vector<int> twoSum(TreeNode * root, int n) {
        // write your code here
        vector<int> result(2);
        unordered_set<int> table;
        stack<TreeNode*> St;
        TreeNode* node = root;
        while (node || !St.empty()) {
            if (node) {
                St.push(node);
                node = node->left;
            }
            else {
                node = St.top();
                St.pop();
                if (table.find(n - node->val) != table.end()) {
                    result[0] = n - node->val;
                    result[1] = node->val;
                    return result;
                }
                table.insert(node->val);
                node = node->right;
            }
        }
        
        return {};
    }
};
