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
     * @param A: an integer array
     * @return: A tree node
     */
    TreeNode * sortedArrayToBST(vector<int> &A) {
        // write your code here
        int n = A.size();
        if (n == 0) {
            return nullptr;
        }
        
        return helper(A, 0, n - 1);
    }
    
private:
    TreeNode* helper(vector<int> &A, int start, int end) {
        if (start > end) {
            return nullptr;
        }
        
        int mid = start + (end - start) / 2;
        TreeNode* root = new TreeNode(A[mid]);
        root->left = helper(A, start, mid - 1);
        root->right = helper(A, mid + 1, end);
        return root;
    }
};
