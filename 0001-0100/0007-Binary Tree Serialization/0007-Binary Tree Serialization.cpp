/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     * This method will be invoked first, you should design your own algorithm 
     * to serialize a binary tree which denote by a root node to a string which
     * can be easily deserialized by your own "deserialize" method later.
     */
    string serialize(TreeNode *root) {
        // write your code here
        if (root == nullptr)
        {
            return "{}";
        }
        vector<TreeNode*> Q;
        Q.push_back(root);
        for (int i = 0; i < Q.size(); ++i)
        {
            TreeNode *node = Q[i];
            if (node == nullptr)
            {
                continue;
            }
            Q.push_back(node->left);
            Q.push_back(node->right);
        }
        
        while (Q.back() == nullptr)
        {
            Q.pop_back();
        }
        
        string s = "{" + to_string(Q[0]->val);
        for (int i = 1; i < Q.size(); ++i)
        {
            if (Q[i] == nullptr)
            {
                s += ",#";
            }
            else
            {
                s += "," + to_string(Q[i]->val);
            }
        }
        s += "}";
        return s;
    }

    /**
     * This method will be invoked second, the argument data is what exactly
     * you serialized at method "serialize", that means the data is not given by
     * system, it's given by your own serialize method. So the format of data is
     * designed by yourself, and deserialize it here as you serialize it in 
     * "serialize" method.
     */
    TreeNode *deserialize(string data) {
        // write your code here
        if (data == "{}")
        {
            return nullptr;
        }
        
        vector<string> s = split(data.substr(1, data.size() - 2), ",");

        TreeNode *root = new TreeNode(stoi(s[0]));
        queue<TreeNode *> Q;
        Q.push(root);
        bool leftChild = true;
        for (int i = 1; i < s.size(); ++i)
        {
            if (s[i] != "#")
            {
                TreeNode *node = new TreeNode(stoi(s[i]));
                if (leftChild)
                {
                    Q.front()->left = node;
                }
                else
                {
                    Q.front()->right = node;
                }
                Q.push(node);
            }
            
            if (!leftChild)
            {
                Q.pop();
            }
            
            leftChild = !leftChild;
        }
        
        return root;
    }
private:
    vector<string> split(string data, string delim)
    {
        vector<string> s;
        int lastIndex = 0, index;
        while ((index = data.find(delim, lastIndex)) != string::npos)
        {
            s.push_back(data.substr(lastIndex, index - lastIndex));
            lastIndex = index + delim.size();
        }
        
        if (lastIndex != data.size())
        {
            s.push_back(data.substr(lastIndex, data.size() - lastIndex));
        }
        
        return s;
    }
};
