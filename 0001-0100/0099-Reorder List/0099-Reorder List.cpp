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
     * @return: void
     */
    void reorderList(ListNode *head) {
        // write your code here
        if (head == nullptr || head->next == nullptr)
        {
            return;
        }
        
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode* head2 = slow->next;
        ListNode* head1 = head;
        slow->next = nullptr;
        head2 = reverseList(head2);
        
        while (head2)
        {
            ListNode* next1 = head1->next;
            ListNode* next2 = head2->next;
            head1->next = head2;
            head2->next = next1;
            head1 = next1;
            head2 = next2;
        }
    }
    
private:
    ListNode* reverseList(ListNode* head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }
        
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr)
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
};
