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
     * @param root: the root
     * @param k: an integer
     * @return: the value of the nearest leaf node to target k in the tree
     */
    int findClosestLeaf(TreeNode * root, int k) {
        // Write your code here
        dfs(root, nullptr);
        if (graph[k].size() == 0) {
            return k;
        }
        unordered_set<int> visited;
        visited.insert(k);
        queue<int> Q;
        Q.push(k);      
        
        while (!Q.empty()) {
            int i = Q.front();
            Q.pop();
            if (graph[i].size() == 1 && i != root->val) {
                return i;
            }
            for (int j : graph[i]) {
                if (visited.find(j) == visited.end()) {
                    Q.push(j);
                    visited.insert(j);
                }
            }
        }
        
        return -1;
    }
    
private:
    unordered_map<int, vector<int>> graph;
    void dfs(TreeNode* node, TreeNode* parent) {
        if (node) {
            if (parent) {
                graph[node->val].push_back(parent->val);
                graph[parent->val].push_back(node->val);
            }
            dfs(node->left, node);
            dfs(node->right, node);
        }
    }
};
