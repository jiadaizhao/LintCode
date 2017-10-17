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
     * @param nodes a array of directed graph node
     * @return a connected set of a directed graph
     */
    vector<vector<int>> connectedSet2(vector<DirectedGraphNode*>& nodes) {
        // Write your code here
        vector<vector<int>> result;
        for (DirectedGraphNode* node : nodes)
        {
            parent[node->label] = node->label;
        }
               
        for (DirectedGraphNode* node : nodes)
        {
            int nodeParent = findParent(node->label);
            for (DirectedGraphNode* neighbor : node->neighbors)
            {
                int neighborParent = findParent(neighbor->label);
                if (nodeParent != neighborParent)
                {
                    nodeParent = parent[nodeParent] = neighborParent;
                }
            }
        }
        
        unordered_map<int, vector<int>> components;
        for (auto it = parent.begin(); it != parent.end(); ++it)
        {
            int parent = findParent(it->first);
            components[parent].push_back(it->first);
        }
        
        for (auto it = components.begin(); it != components.end(); ++it)
        {
            sort(it->second.begin(), it->second.end());
            result.push_back(it->second);
        }
        
        return result;
    }
    
private:
    unordered_map<int, int> parent;
    int findParent(int label)
    {
        while (parent[label] != label)
        {
            parent[label] = parent[parent[label]];
            label = parent[label];
        }
        
        return label;
    }
};
