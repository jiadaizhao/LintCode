class Solution {
public:
    /**
     * @param head: the given linked list
     * @return: the array that store the values in reverse order 
     */
    vector<int> reverseStore(ListNode * head) {
        // write your code here
        vector<int> result;
        while (head) {
            result.push_back(head->val);
            head = head->next;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
