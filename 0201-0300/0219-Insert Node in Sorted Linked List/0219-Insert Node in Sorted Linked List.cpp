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
 */


class Solution {
public:
    /*
     * @param head: The head of linked list.
     * @param val: An integer.
     * @return: The head of new linked list.
     */
    ListNode * insertNode(ListNode * head, int val) {
        // write your code here
        ListNode* node = new ListNode(val);
        if (head == nullptr) {
            return node;
        }
        
        if (val < head->val) {
            node->next = head;
            return node;
        }
        
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while (curr && curr->val <= val) {
            prev = curr;
            curr = curr->next;
        }
        
        prev->next = node;
        node->next = curr;
        return head;
    }
};

class Solution {
public:
    /*
     * @param head: The head of linked list.
     * @param val: An integer.
     * @return: The head of new linked list.
     */
    ListNode * insertNode(ListNode * head, int val) {
        // write your code here
        ListNode* node = new ListNode(val);
        ListNode dummy(-1);
        dummy.next = head;
        ListNode* prev = &dummy;
        while (head && head->val <= val) {
            prev = head;
            head = head->next;
        }
        
        prev->next = node;
        node->next = head; 
        return dummy.next;
    }
};
