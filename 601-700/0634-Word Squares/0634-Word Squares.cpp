class TrieNode {
public:
    // Initialize your data structure here.
    TrieNode() {
        next.resize(26);
    }
    ~TrieNode() {
        for (TrieNode* p : next) {
            if (p) {
                delete p;
            }
        }
    }
    
    vector<TrieNode *> next;
    vector<string> prefix;
};

class Solution {
public:
    /**
     * @param words a set of words without duplicates
     * @return all word squares
     */
    vector<vector<string>> wordSquares(vector<string>& words) {
        // Write your code here
        vector<vector<string>> result;
        if (words.size() == 0) {
            return result;
        }
        
        TrieNode* root = new TrieNode();
        for (string word : words) {
            insert(word, root);
        }
        
        int len = words[0].size();
        
        vector<string> path;
        for (string word : words) {
            path.push_back(word);
            dfs(root, len, path, result);
            path.pop_back();
        }
        
        delete root;
        return result;
    }
    
private:
    void dfs(TrieNode* root, int len, vector<string>& path, vector<vector<string>>& result) {
        if (len == path.size()) {
            result.push_back(path);
            return;
        }
        
        string prefix;
        int ps = path.size();
        for (string s : path) {
            prefix += s[ps];
        }
        
        vector<string> candidate = findCandidate(root, prefix);
        for (string& s : candidate) {
            path.push_back(s);
            dfs(root, len, path, result);
            path.pop_back();
        }
    }
    
    vector<string> findCandidate(TrieNode* root, string prefix) {
        for (char c : prefix) {
            int i = c - 'a';
            if (root->next[i] == nullptr) {
                return {};
            }
            root = root->next[i];
        }
        
        return root->prefix;
    }
    
    
    void insert(string word, TrieNode* node) {
        for (char c : word) {
            int i = c - 'a';
            if (node->next[i] == nullptr) {
                node->next[i] = new TrieNode();
            }
            node = node->next[i];
            node->prefix.push_back(word);
        }
    }
};
