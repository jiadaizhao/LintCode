class TrieNode {
public:
    // Initialize your data structure here.
    TrieNode() {
        next.resize(26);
        isEnd = false;
        str = "";
    }
    
    vector<TrieNode *> next;
    bool isEnd;
    string str;
};

class Solution {
public:
    /**
     * @param board: A list of lists of character
     * @param words: A list of string
     * @return: A list of string
     */
    vector<string> wordSearchII(vector<vector<char> > &board, vector<string> &words) {
        // write your code here
        int m = board.size();
        if (m == 0)
        {
            return vector<string>();
        }
        int n = board[0].size();
        
        TrieNode* root = new TrieNode();
        for (string& word : words)
        {
            insert(word, root);
        }
        
        unordered_set<string> result;
        vector<vector<bool>> visited(m, vector<bool>(n));
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                dfs(board, i, j, visited, root, result);
            }
        }
        
        return vector<string>(result.begin(), result.end());
    }
    
private:
    void insert(string word, TrieNode* root) {
        TrieNode* node = root;
        for (char c : word)
        {
            int i = c - 'a';
            if (node->next[i] == nullptr)
            {
                node->next[i] = new TrieNode();
            }
            node = node->next[i];
        }
        node->isEnd = true;
        node->str = word;
    }
    
    void dfs(vector<vector<char> > &board, int i, int j, vector<vector<bool>>& visited,
             TrieNode* root, unordered_set<string>& result)
    {
        char c = board[i][j];
        if (visited[i][j] || root->next[c - 'a'] == nullptr)
        {
            return;
        }
        
        root = root->next[c - 'a'];
        if (root->isEnd)
        {
            result.insert(root->str);
        }

        visited[i][j] = true;
        if (i > 0)
        {
            dfs(board, i - 1, j, visited, root, result);
        }
        if (i < board.size() - 1)
        {
            dfs(board, i + 1, j, visited, root, result);
        }
        if (j > 0)
        {
            dfs(board, i, j - 1, visited, root, result);
        }
        if (j < board[i].size() - 1)
        {
            dfs(board, i, j + 1, visited, root, result);
        }

        visited[i][j] = false;
    }
};
