/**
 * Definition for Directed graph.
 * struct DirectedGraphNode {
 *     int label;
 *     vector<DirectedGraphNode *> neighbors;
 *     DirectedGraphNode(int x) : label(x) {};
 * };
 */


class Solution {
public:
    /*
     * @param graph: A list of Directed graph node
     * @param s: the starting Directed graph node
     * @param t: the terminal Directed graph node
     * @return: a boolean value
     */
    bool hasRoute(vector<DirectedGraphNode*> graph, DirectedGraphNode* s, DirectedGraphNode* t) {
        // write your code here
        unordered_set<DirectedGraphNode*> visited;
        queue<DirectedGraphNode*> Q;
        Q.push(s);
        visited.insert(s);
        while (!Q.empty()) {
            DirectedGraphNode* node = Q.front();
            Q.pop();
            if (node == t) {
                return true;
            }
            
            for (DirectedGraphNode* neighbor : node->neighbors) {
                if (visited.find(neighbor) == visited.end()) {
                    Q.push(neighbor);
                }
            }
        }
        
        return false;
    }
};
