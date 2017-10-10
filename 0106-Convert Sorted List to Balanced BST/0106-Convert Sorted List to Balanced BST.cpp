/**
 * Definition of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
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
     * @param head: The first node of linked list.
     * @return: a tree node
     */
    TreeNode *sortedListToBST(ListNode *head) {
        // write your code here
        int len = 0;
        ListNode* node = head;
        while (node) {
            ++len;
            node = node->next;
        }
        
        return helper(head, len);
    }
    
private:
    TreeNode* helper(ListNode* &head, int len) {
        if (len == 0) {
            return nullptr;
        }
        
        TreeNode* left = helper(head, len / 2);
        TreeNode* root = new TreeNode(head->val);
        root->left = left;
        head = head->next;
        root->right = helper(head, len - len / 2 - 1);
        return root;
    }
};
