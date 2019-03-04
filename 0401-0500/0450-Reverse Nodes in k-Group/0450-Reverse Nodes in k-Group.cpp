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
     * @param k an integer
     * @return a ListNode
     */
    ListNode *reverseKGroup(ListNode *head, int k) {
        // Write your code here
        ListNode dummy = ListNode(-1);
        dummy.next = head;
        head = &dummy;
        while (head)
        {
            head = reverseNextK(head, k);
        }
        return dummy.next;
    }
private:
    ListNode *reverseNextK(ListNode *head, int k)
    {
        ListNode* nodek = head;
        for (int i = 0; i < k; ++i)
        {
            if (nodek == nullptr)
            {
                return nullptr;
            }
            nodek = nodek->next;
        }
        
        if (nodek == nullptr)
        {
            return nullptr;
        }
    
        ListNode *node1 = head->next;
        ListNode *prev = head;
        ListNode *curr = node1;
        ListNode *nodekPlus = nodek->next;
        while (curr != nodekPlus)
        {
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
    
        head->next = nodek;
        node1->next = nodekPlus;
    
        return node1;
    }
};
