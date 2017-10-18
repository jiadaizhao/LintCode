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
    /*
     * @param head: a ListNode
     * @return: a ListNode
     */
    ListNode * swapPairs(ListNode * head) {
        // write your code here
        ListNode dummy(-1);
        dummy.next = head;
        ListNode* prev = &dummy;
        ListNode* curr = head;
        while (curr && curr->next) {
            ListNode* next = curr->next->next;
            prev->next = curr->next;
            curr->next->next = curr;
            curr->next = next;
            
            prev = curr;
            curr = next;
        }
        
        return dummy.next;
    }
};
