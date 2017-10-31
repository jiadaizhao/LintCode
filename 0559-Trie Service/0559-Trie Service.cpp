/**
 * Definition of TrieNode:
 * class TrieNode {
 * public:
 *     TrieNode() {}
 *     map<char, TrieNode*> children;
 *     vector<int> top10;
 * };
 */
class TrieService {
private:
    TrieNode* root;

public:
    TrieService() {
        root = new TrieNode();
    }

    TrieNode* getRoot() {
        // Return root of trie root, and 
        // lintcode will print the tree struct.
        return root;
    }

    void insert(string& word, int frequency) {
        // Write your code here
        TrieNode* node = root;
        for (char c : word) {
            if (node->children.find(c) == node->children.end()) {
                node->children[c] = new TrieNode();
            }
            node = node->children[c];
            
            node->top10.push_back(frequency);
            int n = node->top10.size();
            int i = n - 2;
            while (i >= 0 && node->top10[i] < frequency) {
                node->top10[i + 1] = node->top10[i];
                --i;
            }
            
            node->top10[i + 1] = frequency;
            
            if (node->top10.size() > 10) {
                node->top10.resize(10);
            }
        }
    }
};
