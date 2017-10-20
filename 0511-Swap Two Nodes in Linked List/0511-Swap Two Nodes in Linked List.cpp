/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    /**
     * @param head a ListNode
     * @oaram v1 an integer
     * @param v2 an integer
     * @return a new head of singly-linked list
     */
    ListNode* swapNodes(ListNode* head, int v1, int v2) {
        // Write your code here
        ListNode dummy = ListNode(-1);
        dummy.next = head;
        ListNode *p1Prev = nullptr, *p2Prev = nullptr;
        ListNode *prev = &dummy;
        while (prev->next) {
            if (prev->next->val == v1) {
                p1Prev = prev;
            } else if (prev->next->val == v2) {
                p2Prev = prev;
            }
            
            if (p1Prev && p2Prev) {
                break;
            }
            
            prev = prev->next;
        }
        
        if (!p1Prev || !p2Prev) {
            return head;
        }
        
        ListNode *p1 = p1Prev->next;
        ListNode *p2 = p2Prev->next;
        p1Prev->next = p2;
        p2Prev->next = p1;
        ListNode* p2next = p2->next;
        p2->next = p1->next;
        p1->next = p2next;
        
        return dummy.next;
    }
};
