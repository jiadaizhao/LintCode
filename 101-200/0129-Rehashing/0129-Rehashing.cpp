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
     * @param hashTable: A list of The first node of linked list
     * @return: A list of The first node of linked list which have twice size
     */    
    vector<ListNode*> rehashing(vector<ListNode*> hashTable) {
        // write your code here
        int n = hashTable.size();
        int m = n * 2;
        vector<ListNode*> result(m);
        for (int i = 0; i < n; ++i)
        {
            ListNode* head = hashTable[i];
            while (head)
            {
                int index = (head->val + m) % m;
                result[index] = insert(result[index], new ListNode(head->val));
                head = head->next;
            }
        }

        return result;
    }
private:
    ListNode* insert(ListNode* head, ListNode* p)
    {
        if (head == nullptr)
        {
            return p;
        }
        
        ListNode* q = head;
        while (q->next)
        {
            q = q->next;
        }
        q->next = p;
        return head;
    }
};
