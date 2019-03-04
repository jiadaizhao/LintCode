/**
 * Your Trie object will be instantiated and called as such:
 * Trie trie;
 * trie.insert("lintcode");
 * trie.search("lint"); will return false
 * trie.startsWith("lint"); will return true
 */
class TrieNode {
public:
    // Initialize your data structure here.
    TrieNode() {
        next.resize(26);
        isEnd = false;
    }
    
    vector<TrieNode *> next;
    bool isEnd;
    ~TrieNode() {
        for (TrieNode* p : next) {
            if (p) {
                delete p;
            }
        }
    }
};

class Trie {
public:
    Trie() {
        root = new TrieNode();
    }

    // Inserts a word into the trie.
    void insert(string word) {
        TrieNode* node = root;
        for (char c : word) {
            int i = c - 'a';
            if (node->next[i] == nullptr) {
                node->next[i] = new TrieNode();
            }
            node = node->next[i];
        }
        node->isEnd = true;
    }

    // Returns if the word is in the trie.
    bool search(string word) {
        TrieNode* node = root;
        for (char c : word) {
            int i = c - 'a';
            if (node->next[i] == nullptr) {
                return false;
            }
            node = node->next[i];
        }
        
        return node->isEnd;
    }

    // Returns if there is any word in the trie
    // that starts with the given prefix.
    bool startsWith(string prefix) {
        TrieNode* node = root;
        for (char c : prefix) {
            int i = c - 'a';
            if (node->next[i] == nullptr) {
                return false;
            }
            node = node->next[i];
        }
        
        return true;
    }
    
    ~Trie() {
        delete root;
    }

private:
    TrieNode* root;
};
