/**
 * Definition of singly-linked-list:
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *        this->val = val;
 *        this->next = NULL;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param head: the first Node
     * @return: the answer after plus one
     */
    ListNode * plusOne(ListNode * head) {
        // Write your code here
        if (head == nullptr) {
            return nullptr;
        }
        ListNode* lastNodeNot9 = nullptr;
        ListNode* node = head;
        while (node) {
            if (node->val != 9) {
                lastNodeNot9 = node;
            }
            node = node->next;
        }
        
        if (!lastNodeNot9) {
            node = head;
        }
        else {
            node = lastNodeNot9->next;
            ++lastNodeNot9->val;
        }
        
        while (node) {
            node->val = 0;
            node = node->next;
        }
        
        if (!lastNodeNot9) {
            ListNode* res = new ListNode(1);
            res->next = head;
            return res;
        }
        else {
            return head;
        }
    }
};
