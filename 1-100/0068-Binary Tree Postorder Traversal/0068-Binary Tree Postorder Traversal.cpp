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
     * @return: Postorder in vector which contains node values.
     */
public:
    vector<int> postorderTraversal(TreeNode *root) {
        // write your code here
        vector<int> result;
        if (root == nullptr)
        {
            return result;
        }
        
        stack<TreeNode*> St;
        St.push(root);
        TreeNode *prev = nullptr;
        while (!St.empty())
        {
            TreeNode *curr = St.top();
            if (prev == nullptr || prev->left == curr || prev->right == curr)
            {
                if (curr->left)
                {
                    St.push(curr->left);
                }
                else if (curr->right)
                {
                    St.push(curr->right);
                }
            }
            else if (curr->left == prev)
            {
                if (curr->right)
                {
                    St.push(curr->right);
                }
            }
            else
            {
                result.push_back(curr->val);
                St.pop();
            }
            prev = curr;
        }
        
        return result;
    }
};
