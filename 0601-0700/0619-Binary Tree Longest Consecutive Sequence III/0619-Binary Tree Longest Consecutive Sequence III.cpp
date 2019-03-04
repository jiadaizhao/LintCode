/**
 * Definition for a multi tree node.
 * struct MultiTreeNode {
 *     int val;
 *     vector<TreeNode*> children;
 *     MultiTreeNode(int x) : val(x) {}
 * };
 */
class Solution {
public:
    /**
     * @param root the root of k-ary tree
     * @return the length of the longest consecutive sequence path
     */
    int longestConsecutive3(MultiTreeNode* root) {
        // Write your code here
        int downLen = 0, upLen = 0, maxLen = 0;
        helper(root, downLen, upLen, maxLen);
        return maxLen;
    }

private:
    void helper(MultiTreeNode* root, int& downLen, int& upLen, int& maxLen) {
        if (root == nullptr) {
            return;
        }
        
        for (MultiTreeNode* child : root->children) {
            int cdownLen = 0, cupLen = 0;
            helper(child, cdownLen, cupLen, maxLen);
            if (root->val == child->val - 1) {
                downLen = max(downLen, cdownLen + 1);
            }
            if (root->val == child->val + 1) {
                upLen = max(upLen, cupLen + 1);
            }
            maxLen = max(maxLen, downLen + 1 + upLen);
        }
    }
};
