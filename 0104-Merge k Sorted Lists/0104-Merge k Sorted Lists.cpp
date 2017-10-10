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
     * @param lists: a list of ListNode
     * @return: The head of one sorted list.
     */
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        // write your code here
        if (lists.size() == 0)
        {
            return nullptr;
        }
        return mergeLists(lists, 0, lists.size() - 1);
    }
private:
    ListNode *mergeLists(vector<ListNode*>& lists, int start, int end)
    {
        if (start < end)
        {
            int mid = start + (end -start) / 2;
            ListNode *l1 = mergeLists(lists, start, mid);
            ListNode *l2 = mergeLists(lists, mid + 1, end);
            return mergeTwoLists(l1, l2);
        }
        
        return lists[start];
    }
    
    ListNode * mergeTwoLists(ListNode* l1, ListNode* l2)
    {
        ListNode dummy = ListNode(-1);
        ListNode* p = &dummy;
        while (l1 && l2)
        {
            if (l1->val <= l2->val)
            {
                p->next = l1;
                l1 = l1->next;
            }
            else
            {
                p->next = l2;
                l2 = l2->next;
            }
            p = p->next;
        }
        
        p->next = l1 ? l1 : l2;
        return dummy.next;
    }
};
