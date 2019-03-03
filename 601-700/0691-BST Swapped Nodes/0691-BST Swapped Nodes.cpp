class Solution {
public:
    /*
     * @param : the given tree
     * @return: the tree after swapping
     */
    TreeNode * bstSwappedNode(TreeNode * root) {
        // write your code here
        stack<TreeNode*> St;
        TreeNode* curr = root;
        TreeNode *prev = nullptr, *first = nullptr, *second = nullptr;
        while (curr || !St.empty()) {
            if (curr) {
                St.push(curr);
                curr = curr->left;
            }
            else {
                curr = St.top();
                St.pop();
                if (prev && curr->val < prev->val) {
                    if (first == nullptr) {
                        first = prev;
                    }
                    second = curr;
                }
                prev = curr;
                curr = curr->right;
            }
        }
        if (first) {
            swap(first->val, second->val);
        }
        return root;
    }
};
