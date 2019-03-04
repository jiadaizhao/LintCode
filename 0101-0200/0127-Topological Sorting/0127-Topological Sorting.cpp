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
    /**
     * @param graph: A list of Directed graph node
     * @return: Any topological order for the given graph.
     */
    vector<DirectedGraphNode*> topSort(vector<DirectedGraphNode*> graph) {
        // write your code here
        vector<DirectedGraphNode*> result;
        unordered_map<DirectedGraphNode*, int> degrees;
        for (DirectedGraphNode* node : graph)
        {
            if (degrees.find(node) == degrees.end())
            {
                degrees[node] = 0;
            }
            for (DirectedGraphNode* neighbor : node->neighbors)
            {
                ++degrees[neighbor];
            }
        }
        
        queue<DirectedGraphNode*> Q;
        for (auto it = degrees.begin(); it != degrees.end(); ++it)
        {
            if (it->second == 0)
            {
                Q.push(it->first);
            }
        }
        
        while (!Q.empty())
        {
            DirectedGraphNode* node = Q.front();
            result.push_back(node);
            Q.pop();
            for (DirectedGraphNode* neighbor : node->neighbors)
            {
                if (--degrees[neighbor] == 0)
                {
                    Q.push(neighbor);
                }
            }
        }
        
        return result;
    }
};
