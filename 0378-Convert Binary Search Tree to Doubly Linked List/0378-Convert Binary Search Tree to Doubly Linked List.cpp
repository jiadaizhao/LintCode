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
 * Definition of Doubly-ListNode
 * class DoublyListNode {
 * public:
 *     int val;
 *     DoublyListNode *next, *prev;
 *     DoublyListNode(int val) {
 *         this->val = val;
           this->prev = this->next = NULL;
 *     }
 * }
 */


class Solution {
public:
    /*
     * @param root: The root of tree
     * @return: the head of doubly list node
     */
    DoublyListNode * bstToDoublyList(TreeNode * root) {
        // write your code here
        if (root == nullptr) {
            return nullptr;
        }
        
        stack<TreeNode*> St;
        DoublyListNode* head = nullptr;
        DoublyListNode* tail = nullptr;
        TreeNode* p = root;
        while (p || !St.empty()) {
            if (p) {
                St.push(p);
                p = p->left;
            }
            else {
                p = St.top();
                St.pop();
                DoublyListNode* node = new DoublyListNode(p->val);
                if (head == nullptr) {
                    head = tail = node;
                }
                else {
                    tail->next = node;
                    node->prev = tail;
                    tail = node;
                }
                p = p->right;
            }
        }
        return head;
    }
};
