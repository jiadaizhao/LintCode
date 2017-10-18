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
     * @param val: An integer
     * @return: a ListNode
     */
    ListNode * removeElements(ListNode * head, int val) {
        // write your code here
        ListNode dummy(-1);
        ListNode* node = &dummy;
        while (head) {
            if (head->val != val) {
                node->next = head;
                node = head;
            }
            head = head->next;
        }
        node->next = nullptr;
        return dummy.next;
    }
};
