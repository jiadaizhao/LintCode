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
     * @param root: the root
     * @return: all the values with the highest frequency in any order
     */
    vector<int> findFrequentTreeSum(TreeNode * root) {
        // Write your code here
        int maxCount = 0;
        treeSum(root, maxCount);
        vector<int> result;
        for (auto t : table) {
            if (t.second == maxCount) {
                result.push_back(t.first);
            }
        }
        return result;
    }
    
private:
    unordered_map<int, int> table;
    int treeSum(TreeNode * root, int& maxCount) {
        if (root == nullptr) {
            return 0;
        }
        int leftSum = treeSum(root->left, maxCount);
        int rightSum = treeSum(root->right, maxCount);
        int sum = leftSum + root->val + rightSum;
        if (++table[sum] > maxCount) {
            maxCount = table[sum];
        }
        return sum;
    }
};
