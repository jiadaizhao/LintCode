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
     * @return: Nth to last node of a singly linked list. 
     */
    ListNode *nthToLast(ListNode *head, int n) {
        // write your code here
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && n)
        {
            fast = fast->next;
            --n;
        }
        
        while (fast)
        {
            fast = fast->next;
            slow = slow->next;
        }
        
        return slow;
    }
};
