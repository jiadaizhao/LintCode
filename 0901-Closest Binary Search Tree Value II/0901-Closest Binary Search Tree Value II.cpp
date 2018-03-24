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
     * @param root: the given BST
     * @param target: the given target
     * @param k: the given k
     * @return: k values in the BST that are closest to the target
     */
    vector<int> closestKValues(TreeNode * root, double target, int k) {
        // write your code here
        stack<TreeNode*> pre, suc;
        while (root) {
            if (root->val <= target) {
                pre.push(root);
                root = root->right;
            }
            else {
                suc.push(root);
                root = root->left;
            }
        }
        
        vector<int> result;
        while (k--) {
            if (pre.empty()) {
                result.push_back(getNextSuccessor(suc));
            }
            else if (suc.empty()) {
                result.push_back(getNextPredecessor(pre));
            }
            else if (abs(pre.top()->val - target) <= abs(suc.top()->val - target)) {
                result.push_back(getNextPredecessor(pre));
            }
            else {
                result.push_back(getNextSuccessor(suc));   
            }
        }
        return result;
    }
    
private:
    int getNextPredecessor(stack<TreeNode*>& pre) {
        TreeNode* curr = pre.top();
        int result = curr->val;
        pre.pop();
        curr = curr->left;
        while (curr) {
            pre.push(curr);
            curr = curr->right;
        }
        return result;
    }
    
    int getNextSuccessor(stack<TreeNode*>& suc) {
        TreeNode* curr = suc.top();
        int result = curr->val;
        suc.pop();
        curr = curr->right;
        while (curr) {
            suc.push(curr);
            curr = curr->left;
        }
        return result;
    }
};
