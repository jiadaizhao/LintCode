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
     * @param head: the list
     * @param k: rotate to the right k places
     * @return: the list after rotation
     */
    ListNode *rotateRight(ListNode *head, int k) {
        // write your code here
        if (head == nullptr || k == 0)
        {
            return head;
        }
        
        ListNode* tail = head;
        int len = 1;
        while (tail->next)
        {
            ++len;
            tail = tail->next;
        }
        
        k = k % len;
        if (k == 0)
        {
            return head;
        }
        
        ListNode* p = head;
        for (int i = 0; i < len - k - 1; ++i)
        {
            p = p->next;
        }
        
        tail->next = head;
        head = p->next;
        p->next = nullptr;
        
        return head;
    }
};
