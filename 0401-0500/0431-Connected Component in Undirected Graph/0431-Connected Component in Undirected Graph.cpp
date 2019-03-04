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
     * @param nodes a array of Undirected graph node
     * @return a connected set of a Undirected graph
     */
    vector<vector<int>> connectedSet(vector<UndirectedGraphNode*>& nodes) {
        // Write your code here
        unordered_set<UndirectedGraphNode*> visited;
        vector<vector<int>> result;
        
        for (UndirectedGraphNode* node : nodes)
        {
            if (visited.find(node) == visited.end())
            {
                vector<int> component;
                visited.insert(node);
                queue<UndirectedGraphNode*> Q;
                Q.push(node);
                component.push_back(node->label);
                while (!Q.empty())
                {
                    UndirectedGraphNode* p = Q.front();
                    Q.pop();
                    for (UndirectedGraphNode* neighbor : p->neighbors)
                    {
                        if (visited.find(neighbor) == visited.end())
                        {
                            visited.insert(neighbor);
                            Q.push(neighbor);
                            component.push_back(neighbor->label);
                        }
                    }
                }
                
                sort(component.begin(), component.end());
                result.push_back(component);
            }
        }
        
        return result;
    }
};
