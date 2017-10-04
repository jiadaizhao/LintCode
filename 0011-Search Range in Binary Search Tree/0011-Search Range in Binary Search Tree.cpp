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
     * @param root: The root of the binary search tree.
     * @param k1 and k2: range k1 to k2.
     * @return: Return all keys that k1<=key<=k2 in ascending order.
     */
    vector<int> searchRange(TreeNode* root, int k1, int k2) {
        // write your code here
        vector<int> result;
        stack<TreeNode*> St;
        TreeNode* p = root;
        while (p || !St.empty())
        {
            if (p)
            {
                St.push(p);
                p = p->left;
            }
            else
            {
                p = St.top();
                if (p->val >= k1 && p->val <= k2)
                {
                    result.push_back(p->val);
                }
                St.pop();
                p = p->right;
            }
        }
        
        return result;
    }
};
