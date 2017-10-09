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
     * @param x: an integer
     * @return: a ListNode 
     */
    ListNode *partition(ListNode *head, int x) {
        // write your code here
        ListNode dummy1 = ListNode(-1);
        ListNode* p1 = &dummy1;
        ListNode dummy2 = ListNode(-1);
        ListNode* p2 = &dummy2;
        while (head)
        {
            if (head->val < x)
            {
                p1->next = head;
                p1 = p1->next;
            }
            else
            {
                p2->next = head;
                p2 = p2->next;
            }
            head = head->next;
        }
        
        p1->next = dummy2.next;
        p2->next = nullptr;
        return  dummy1.next;
    }
};
