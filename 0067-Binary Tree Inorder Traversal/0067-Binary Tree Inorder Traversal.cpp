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
     * @return: Inorder in vector which contains node values.
     */
public:
    vector<int> inorderTraversal(TreeNode *root) {
        // write your code here
        vector<int> result;
        stack<TreeNode*> St;
        TreeNode *p = root;
        while(p || !St.empty())
        {
            if (p)
            {
                St.push(p);
                p = p->left;
            }
            else
            {
                p = St.top();
                St.pop();
                result.push_back(p->val);
                p = p->right;
            }
        }
        
        return result;
    }
};
