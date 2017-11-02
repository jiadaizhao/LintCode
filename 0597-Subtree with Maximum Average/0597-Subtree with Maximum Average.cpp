/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right>;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right> = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     * @param root the root of binary tree
     * @return the root of the maximum average of subtree 
     */
    TreeNode* findSubtree2(TreeNode* root) {
        // Write your code here
        if (root == nullptr) {
            return root;
        }
        
        maxAve = INT_MIN;
        maxAveRoot = nullptr;
        int num = 0;
        average(root, num);
        return maxAveRoot;
    }
private:
    TreeNode* maxAveRoot;
    double maxAve;
    double average(TreeNode* root, int& num) {
        if (root == nullptr) {
            return 0;
        }
        int numl = 0, numr = 0;
        double avel = 0, aver = 0;
        
        avel = average(root->left, numl);
        aver = average(root->right, numr);

        num = 1 + numl + numr;
        double ave = (avel * numl + aver * numr + root->val) / num;
        if (maxAveRoot == nullptr || ave > maxAve) {
            maxAveRoot = root;
            maxAve = ave;
        }

        return ave;
    }
};
