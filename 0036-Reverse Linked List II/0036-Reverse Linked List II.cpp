/**
 * Definition of singly-linked-list:
 * 
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
     * @param head: The head of linked list.
     * @param m: The start position need to reverse.
     * @param n: The end position need to reverse.
     * @return: The new head of partial reversed linked list.
     */
    ListNode *reverseBetween(ListNode *head, int m, int n) {
        // write your code here
        ListNode dummy = ListNode(-1);
        dummy.next = head;
        head = &dummy;
        for (int i = 0; i < m - 1; ++i)
        {
            head = head->next;
        }
        ListNode* prev = head;
        ListNode* curr = prev->next;
        ListNode* nodem = curr;
        for (int i = m; i <= n; ++i)
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        head->next = prev;
        nodem->next = curr;
        
        return dummy.next;
    }
};
