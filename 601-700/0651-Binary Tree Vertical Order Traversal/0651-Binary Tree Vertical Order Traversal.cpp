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
     * @param root: the root of tree
     * @return: the vertical order traversal
     */
    vector<vector<int>> verticalOrder(TreeNode * root) {
        // write your code here
        vector<vector<int>> result;
        if (root == nullptr) {
            return result;
        }
        map<int, vector<int>> table;
        queue<pair<TreeNode*, int>> Q;
        Q.emplace(root, 0);
        while (!Q.empty()) {
            TreeNode* node = Q.front().first;
            int index = Q.front().second;
            Q.pop();
            table[index].push_back(node->val);
            if (node->left) {
                Q.emplace(node->left, index - 1);
            }
            if (node->right) {
                Q.emplace(node->right, index + 1);
            }
        }
        
        for (auto t : table) {
            result.push_back(t.second);
        }
        
        return result;
    }
};
