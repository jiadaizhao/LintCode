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
    /**
     * @param head: The first node of linked list.
     * @param n: An integer.
     * @return: The head of linked list.
     */
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        // write your code here
        ListNode dummy = ListNode(-1);
        dummy.next = head;
        ListNode* slow = &dummy;
        ListNode* fast = &dummy;
        for (int i = 0; i < n + 1; ++i)
        {
            fast = fast->next;
        }
        
        while (fast)
        {
            slow = slow->next;
            fast = fast->next;
        }
        
        slow->next = slow->next->next;
        return dummy.next;
    }
};
