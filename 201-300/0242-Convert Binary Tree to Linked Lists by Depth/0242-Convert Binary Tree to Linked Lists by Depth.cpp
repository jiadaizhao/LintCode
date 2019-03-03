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
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    /**
     * @param root the root of binary tree
     * @return a lists of linked list
     */
    vector<ListNode*> binaryTreeToLists(TreeNode* root) {
        // Write your code here
        vector<ListNode*> result;
        if (root == nullptr)
        {
            return result;
        }
        queue<TreeNode*> Q;
        Q.push(root);
        while (!Q.empty())
        {
            int qs = Q.size();
            TreeNode* node = Q.front();
            Q.pop();
            ListNode* head = new ListNode(node->val);
            ListNode* p = head;
            if (node->left)
            {
                Q.push(node->left);
            }
            if (node->right)
            {
                Q.push(node->right);
            }
            for (int i = 1; i < qs; ++i)
            {
                node = Q.front();
                Q.pop();
                p->next = new ListNode(node->val);
                p = p->next;
                if (node->left)
                {
                    Q.push(node->left);
                }
                if (node->right)
                {
                    Q.push(node->right);
                }
            }
            result.push_back(head);
        }
        
        return result;
    }
};
