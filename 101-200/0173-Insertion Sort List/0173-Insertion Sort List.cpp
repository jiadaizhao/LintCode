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
     * @param head: The first node of linked list.
     * @return: The head of linked list.
     */
    ListNode * insertionSortList(ListNode * head) {
        // write your code here
        ListNode dummy(-1);
        ListNode* prev = &dummy;
        ListNode* curr = head;
        while (curr) {
            ListNode* next = curr->next;
            if (!prev->next || prev->next->val > curr->val) {
                prev = &dummy;
            }
            
            while (prev->next && prev->next->val <= curr->val) {
                prev = prev->next;
            }
            
            curr->next = prev->next;
            prev->next = curr;
            curr = next;
        }
        
        return dummy.next;
    }
};
