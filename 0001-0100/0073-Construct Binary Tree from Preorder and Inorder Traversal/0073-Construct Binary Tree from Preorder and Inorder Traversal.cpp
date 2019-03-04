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
     *@param preorder : A list of integers that preorder traversal of a tree
     *@param inorder : A list of integers that inorder traversal of a tree
     *@return : Root of a tree
     */
public:
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
        // write your code here
        if (preorder.size() == 0)
        {
            return nullptr;
        }
        
        int preStart = 0;
        return build(preorder, preStart, inorder, 0, inorder.size() - 1);
    }
    
private:
    TreeNode* build(vector<int> &preorder, int& preStart, vector<int> &inorder,
                    int inStart, int inEnd)
    {
        if (inStart > inEnd)
        {
            return nullptr;
        }
        
        TreeNode* root = new TreeNode(preorder[preStart++]);
        int index;
        for (int i = inStart; i <= inEnd; ++i)
        {
            if (root->val == inorder[i])
            {
                index = i;
                break;
            }
        }
        
        root->left = build(preorder, preStart, inorder, inStart, index - 1);
        root->right = build(preorder, preStart, inorder, index + 1, inEnd);
        return root;
    }
};
