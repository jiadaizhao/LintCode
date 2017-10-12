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
     * @paramn n: An integer
     * @return: A list of root
     */
    vector<TreeNode *> generateTrees(int n) {
        // write your code here
        return generateTrees(1, n);
    }
    
private:
    vector<TreeNode *> generateTrees(int start, int end) {
        if (start > end)
        {
            return {nullptr};
        }
        
        vector<TreeNode *> result;
        
        for (int i = start; i <= end; ++i)
        {
            vector<TreeNode *> lefts = generateTrees(start, i - 1);
            vector<TreeNode *> rights = generateTrees(i + 1, end);
            for (TreeNode* left : lefts)
            {
                for (TreeNode* right : rights)
                {
                    TreeNode* root = new TreeNode(i);
                    root->left = left;
                    root->right = right;
                    result.push_back(root);
                }
            }
        }
        
        return result;
    }
};
