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
     * @return: You should return the head of the sorted linked list,
                    using constant space complexity.
     */
    ListNode *sortList(ListNode *head) {
        // write your code here
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }
        ListNode *mid = findMedian(head);
        ListNode *right = sortList(mid->next);
        mid->next = nullptr;
        ListNode *left = sortList(head);
        return mergeTwoLists(left, right);
    }
private:
    ListNode *findMedian(ListNode *head) {
        if (head == nullptr)
        {
            return nullptr;
        }
        ListNode *slow = head;
        ListNode *fast = head->next;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
    }
    
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        ListNode dummy = ListNode(-1);
        ListNode* head = &dummy;
        while (l1 && l2)
        {
            if (l1->val <= l2->val)
            {
                head->next = l1;
                l1 = l1->next;
            }
            else
            {
                head->next = l2;
                l2 = l2->next;
            }
            head = head->next;
        }
        
        if (l1)
        {
            head->next = l1;
        }
        
        if (l2)
        {
            head->next = l2;
        }
        
        return dummy.next;
    }
};
