/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
    /**
     * @param head: The head of linked list with a random pointer.
     * @return: A new head of a deep copy of the list.
     */
    RandomListNode *copyRandomList(RandomListNode *head) {
        // write your code here
        if (head == nullptr)
        {
            return nullptr;
        }
        
        RandomListNode *node = head;
        while (node)
        {
            RandomListNode *newnode = new RandomListNode(node->label);
            newnode->next = node->next;
            newnode->random = node->random;
            node->next = newnode;
            node = newnode->next;
        }
        
        node = head;
        while (node)
        {
            if (node->next->random)
            {
                node->next->random = node->random->next;
            }
            node = node->next->next;
        }
        
        node = head;
        RandomListNode *nh = head->next;
        while (node)
        {
            RandomListNode* nc = node->next;
            node->next = nc->next;
            if (nc->next)
            {
                nc->next = nc->next->next;
            }
            node = node->next;
        }
        
        return nh;
    }
};
