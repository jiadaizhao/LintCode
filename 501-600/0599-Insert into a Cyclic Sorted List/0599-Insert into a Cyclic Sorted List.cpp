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
     * @param node a list node in the list
     * @param x an integer
     * @return the inserted new list node
     */
    ListNode* insert(ListNode* node, int x) {
        // Write your code here
        if (node == nullptr) {
            ListNode* p = new ListNode(x);
            p->next = p;
            return p;
        }
        
        ListNode* prev = node;
        ListNode* curr = node->next;
        while (curr != node) {
            if (prev->val <= x && x <= curr->val) {
                break;
            }
            
            if (prev->val > curr->val && (prev->val <= x || x <= curr->val)) {
                break;
            }
            
            prev = curr;
            curr = curr->next;
        }
        
        ListNode* p = new ListNode(x);
        prev->next = p;
        p->next = curr;
        
        return p;
    }
};
