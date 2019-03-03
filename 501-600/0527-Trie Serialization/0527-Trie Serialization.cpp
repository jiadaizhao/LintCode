/**
 * Definition of TrieNode:
 * class TrieNode {
 * public:
 *     TrieNode() {}
 *     map<char, TrieNode*> children;
 * };
 */
class Solution {
public:
    /**
     * This method will be invoked first, you should design your own algorithm 
     * to serialize a trie which denote by a root node to a string which
     * can be easily deserialized by your own "deserialize" method later.
     */
    string serialize(TrieNode* root) {
        // Write your code here
        if (root == nullptr)
        {
            return "";
        }
        
        string result = "<";
        for (auto child : root->children)
        {
            result += child.first;
            result += serialize(child.second);
        }
        result += ">";
        return result;
    }

    /**
     * This method will be invoked second, the argument data is what exactly
     * you serialized at method "serialize", that means the data is not given by
     * system, it's given by your own serialize method. So the format of data is
     * designed by yourself, and deserialize it here as you serialize it in 
     * "serialize" method.
     */
    TrieNode* deserialize(string data) {
        // Write your code here
        if (data.size() == 0)
        {
            return nullptr;
        }
        TrieNode* root = new TrieNode();
        stack<TrieNode*> St;
        TrieNode* node = root;
        for (char c : data)
        {
            if (c == '<')
            {
                St.push(node);
            }
            else if (c == '>')
            {
                St.pop();
            }
            else
            {
                node = new TrieNode();
                St.top()->children[c] = node;
            }
        }
        
        return root;
    }
};
