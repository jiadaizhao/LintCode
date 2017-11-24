class Solution {
public:
    /*
     * @param : the array
     * @return: the max xor sum of the subarray in a given array
     */
    int maxXorSubarray(vector<int> &nums) {
        // write code here
        int result = 0;
        TrieNode* root = new TrieNode();
        insert(root, 0);
        int val = 0;
        for (int num : nums) {
            val ^= num;
            insert(root, val);
            result = max(result, query(root, val));
        }
        delete root;
        return result;
    }
    
private:
    class TrieNode {
    public:
        vector<TrieNode*> next;
        int val;
        TrieNode() {
            next.resize(2);
            val = 0;
        }
        
        ~TrieNode() {
            for (TrieNode* p : next) {
                if (p) {
                    delete p;
                }
            }
        }
    };
    
    void insert(TrieNode* root, int val) {
        TrieNode* node = root;
        for (int i = 31; i >= 0; --i) {
            int index = (val & (1 << i)) ? 1 : 0;
            if (node->next[index] == nullptr) {
                node->next[index] = new TrieNode();
            }
            node = node->next[index];
        }
        node->val = val;
    }
    
    int query(TrieNode* root, int val) {
        TrieNode* node = root;
        for (int i = 31; i >= 0; --i) {
            int index = (val & (1 << i)) ? 1 : 0;
            if (node->next[1 - index] != nullptr) {
                node = node->next[1 - index];
            }
            else {
                node = node->next[index];
            }
        }
        return val ^ node->val;
    }
};
