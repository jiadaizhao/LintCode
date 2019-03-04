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
     * @param headA: the first list
     * @param headB: the second list
     * @return: a ListNode
     */
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // write your code here
        ListNode* p1 = headA;
        ListNode* p2 = headB;
        while (p1 != p2)
        {
            p1 = p1 ? p1->next : headB;
            p2 = p2 ? p2->next : headA;
        }
        
        return p1;
    }
};
