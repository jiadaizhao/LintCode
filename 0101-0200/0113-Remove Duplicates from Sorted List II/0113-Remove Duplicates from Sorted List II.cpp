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
class Solution{
public:
    /**
     * @param head: The first node of linked list.
     * @return: head node
     */
    ListNode * deleteDuplicates(ListNode *head) {
        // write your code here
        ListNode dummy(-1);
        dummy.next = head;
        ListNode* p = &dummy;
        while (p->next && p->next->next) {
            if (p->next->val == p->next->next->val) {
                int val = p->next->val;
                while (p->next && p->next->val == val) {
                    p->next = p->next->next;
                }
            }
            else {
                p = p->next;
            }
        }
        
        return dummy.next;
    }
};
