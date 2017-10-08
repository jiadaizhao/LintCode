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
     *@param inorder : A list of integers that inorder traversal of a tree
     *@param postorder : A list of integers that postorder traversal of a tree
     *@return : Root of a tree
     */
public:
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
        // write your code here
        int postEnd = postorder.size() - 1;
        return build(inorder, 0, inorder.size() - 1, postorder, postEnd);
    }
    
private:
    TreeNode *build(vector<int> &inorder, int inStart, int inEnd, vector<int> &postorder, int& postEnd)
    {
        if (inStart > inEnd)
        {
            return nullptr;
        }
        
        TreeNode* root = new TreeNode(postorder[postEnd--]);
        int index;
        for (int i = inStart; i <= inEnd; ++i)
        {
            if (inorder[i] == root->val)
            {
                index = i;
                break;
            }
        }
        
        root->right = build(inorder, index + 1, inEnd, postorder, postEnd);
        root->left = build(inorder, inStart, index - 1, postorder, postEnd);
        return root;
    }
};
