/**
 * Definition for Undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
class Solution {
public:
    /**
     * @param graph a list of Undirected graph node
     * @param values a hash mapping, <UndirectedGraphNode, (int)value>
     * @param node an Undirected graph node
     * @param target an integer
     * @return the a node
     */
    UndirectedGraphNode* searchNode(vector<UndirectedGraphNode*>& graph,
                                    map<UndirectedGraphNode*, int>& values,
                                    UndirectedGraphNode* node,
                                    int target) {
        // Write your code here
        queue<UndirectedGraphNode*> Q;
        unordered_set<UndirectedGraphNode*> visited;
        Q.push(node);
        visited.insert(node);
        while (!Q.empty()) {
            UndirectedGraphNode* node = Q.front();
            Q.pop();
            if (values[node] == target) {
                return node;
            }
            
            for (auto n : node->neighbors) {
                if (visited.find(n) == visited.end()) {
                    Q.push(n);
                    visited.insert(node);
                }
            }
        }
        
        return nullptr;
    }
};
