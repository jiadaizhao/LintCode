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
     * @param l1: the first list
     * @param l2: the second list
     * @return: the sum list of l1 and l2 
     */
    ListNode *addLists(ListNode *l1, ListNode *l2) {
        // write your code here
        int carry = 0;
        ListNode dummy(-1);
        ListNode* p = &dummy;
        while (l1 || l2)
        {
            int sum = 0;
            sum += l1 ? l1->val : 0;
            sum += l2 ? l2->val : 0;
            sum += carry;
            carry = sum / 10;
            sum %= 10;
            p->next = new ListNode(sum);
            
            if (l1)
            {
                l1 =l1->next;
            }
            if (l2)
            {
                l2 = l2->next;
            }
            p = p->next;
        }
        
        if (carry)
        {
            p->next = new ListNode(1);
        }
        
        return dummy.next;
    }
};
