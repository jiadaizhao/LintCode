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
    /**
     * @param root: The root of binary tree.
     * @return: A list of lists of integer include 
     *          the zigzag level order traversal of its nodes' values 
     */
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root) {
        // write your code here
        vector<vector<int>> result;
        if (root == nullptr)
        {
            return result;
        }
        
        queue<TreeNode *> Q;
        Q.push(root);
        bool fromLeft = true;
        while (!Q.empty())
        {
            int qs = Q.size();
            vector<int> path(qs);
            for (int i = 0; i < qs; ++i)
            {
                TreeNode *node = Q.front();
                Q.pop();
                int index = fromLeft ? i : qs - 1 - i;
                path[index] = node->val;
                if (node->left)
                {
                    Q.push(node->left);
                }
                if (node->right)
                {
                    Q.push(node->right);
                }
            }

            fromLeft = !fromLeft;
            result.push_back(path);
        }
        
        return result;
    }
};
