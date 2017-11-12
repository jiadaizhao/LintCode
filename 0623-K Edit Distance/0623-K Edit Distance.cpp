class TrieNode {
public:
    TrieNode() {
        next.resize(26);
        isEnd = false;
        str = "";
    }
    
    ~TrieNode() {
        for (TrieNode* p : next) {
            if (p) {
                delete p;
            }
        }
    }
    
    vector<TrieNode*> next;
    bool isEnd;
    string str;
};

class Solution {
public:
    /**
     * @param words a set of stirngs
     * @param target a target string
     * @param k an integer
     * @return output all the strings that meet the requirements
     */
    vector<string> kDistance(vector<string>& words, string& target, int k) {
        // Write your code here
        TrieNode* root = new TrieNode();
        for (string& word : words) {
            insert(word, root);
        }
        
        int n = target.size();
        vector<int> dp(1 + n);
        for (int i = 0; i <= n; ++i) {
            dp[i] = i;
        }
        vector<string> result;
        dfs(root, target, k, dp, result);
        return result;
    }
    
private:
    void insert(string& word, TrieNode* root) {
        TrieNode* node = root;
        for (char c : word) {
            int i = c - 'a';
            if (node->next[i] == nullptr) {
                node->next[i] = new TrieNode();
            }
            node = node->next[i];
        }
        
        node->isEnd = true;
        node->str = word;
    }
    
    void dfs(TrieNode* node, string& target, int k, vector<int>& dp, vector<string>& result) {
        int n = target.size();
        if (node->isEnd && dp[n] <= k) {
            result.push_back(node->str);
        }
        
        vector<int> nextdp(1 + n);
        nextdp[0] = dp[0] + 1;
        for (int i = 0; i < 26; ++i) {
            if (node->next[i]) {
                for (int j = 1; j <= n; ++j) {
                    if (target[j - 1] - 'a' == i) {
                        nextdp[j] = min(dp[j - 1], min(nextdp[j - 1] + 1, dp[j] + 1));
                    }
                    else {
                        nextdp[j] = min(dp[j - 1] + 1, min(nextdp[j - 1] + 1, dp[j] + 1));
                    }
                }
                
                dfs(node->next[i], target, k, nextdp, result);
            }
        }
    }
};
