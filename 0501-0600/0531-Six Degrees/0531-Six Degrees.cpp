/**
 * Definition for undirected graph.
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
     * @param s, t two Undirected graph nodes
     * @return an integer
     */
    int sixDegrees(vector<UndirectedGraphNode*> graph,
                   UndirectedGraphNode* s,
                   UndirectedGraphNode* t) {
        // Write your code here
        if (s == nullptr || t == nullptr) {
            return -1;
        }
        
        if (s == t) {
            return 0;
        }
        queue<UndirectedGraphNode*> Q;
        unordered_set<UndirectedGraphNode*> visited;
        Q.push(s);
        visited.insert(s);
        int step = 0;
        while (!Q.empty()) {
            int qs = Q.size();
            ++step;
            for (int i = 0; i < qs; ++i) {
                UndirectedGraphNode* node = Q.front();
                Q.pop();
                for (UndirectedGraphNode* n : node->neighbors) {
                    if (n == t) {
                        return step;
                    }
                    if (visited.find(n) == visited.end()) {
                        visited.insert(n);
                        Q.push(n);
                    }
                }
            }
        }
        
        return -1;
    }
};
