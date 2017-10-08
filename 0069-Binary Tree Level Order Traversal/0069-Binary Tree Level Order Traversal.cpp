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
     * @return: Level order a list of lists of integer
     */
public:
    vector<vector<int>> levelOrder(TreeNode *root) {
        // write your code here
        vector<vector<int>> result;
        if (root == nullptr)
        {
            return result;
        }
        queue<TreeNode*> Q;
        Q.push(root);
        while (!Q.empty())
        {
            int n = Q.size();
            vector<int> path;
            for (int i = 0; i < n; ++i)
            {
                TreeNode* p = Q.front();
                Q.pop();
                path.push_back(p->val);
                if (p->left)
                {
                    Q.push(p->left);
                }
                if (p->right)
                {
                    Q.push(p->right);
                }
            }
            result.push_back(path);
        }
        
        return result;
    }
};
