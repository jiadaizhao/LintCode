class TrieNode {
public:
    vector<TrieNode*> next;
    bool isEnd;
    TrieNode() {
        next.resize(26);
        isEnd = false;
    }
    ~TrieNode() {
        for (TrieNode* p : next) {
            if (p) {
                delete p;
            }
        }
    }
};

class WordDictionary {
public:
    WordDictionary() {
        root = new TrieNode();
    }
    
    ~WordDictionary() {
        delete root;
    }
    /*
     * @param word: Adds a word into the data structure.
     * @return: nothing
     */
    void addWord(string &word) {
        // write your code here
        TrieNode* node = root;
        for (char c : word) {
            int index = c - 'a';
            if (node->next[index] == nullptr) {
                node->next[index] = new TrieNode();
            }
            node = node->next[index];
        }
        node->isEnd = true;
    }

    /*
     * @param word: A word could contain the dot character '.' to represent any one letter.
     * @return: if the word is in the data structure.
     */
    bool search(string &word) {
        // write your code here
        return dfs(word, root);
    }
    
private:
    TrieNode* root;
    bool dfs(string word, TrieNode* node) {
        if (node == nullptr) {
            return false;
        }
        
        TrieNode* curr = node;
        for (int i = 0; i < word.size(); ++i) {
            if (word[i] == '.') {
                for (int j = 0; j < 26; ++j) {
                    if (dfs(word.substr(i + 1), curr->next[j])) {
                        return true;
                    }
                }
                return false;
            }
            else {
                if (curr->next[word[i] - 'a'] == nullptr) {
                    return false;
                }
                curr = curr->next[word[i] - 'a'];
            }
        }
        
        return curr->isEnd;
    }
};

// Your WordDictionary object will be instantiated and called as such:
// WordDictionary wordDictionary;
// wordDictionary.addWord("word");
// wordDictionary.search("pattern");
