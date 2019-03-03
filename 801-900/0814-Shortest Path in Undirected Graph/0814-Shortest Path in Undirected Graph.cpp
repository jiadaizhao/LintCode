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
     * @param graph: a list of Undirected graph node
     * @param A: nodeA
     * @param B: nodeB
     * @return:  the length of the shortest path
     */
    int shortestPath(vector<UndirectedGraphNode*> graph, UndirectedGraphNode* A, UndirectedGraphNode* B) {
        // Write your code here
        int step = -1;
        queue<UndirectedGraphNode*> Q;
        Q.push(A);
        unordered_set<UndirectedGraphNode*> visited;
        visited.insert(A);
        while (!Q.empty()) {
            ++step;
            int qs = Q.size();
            for (int i = 0; i < qs; ++i) {
                auto node = Q.front();
                Q.pop();
                if (node == B) {
                    return step;
                }
                for (auto neighbor : node->neighbors) {
                    if (!visited.count(neighbor)) {
                        Q.push(neighbor);
                        visited.insert(neighbor);
                    }
                }
            }
        }
        return -1;
    }
};
