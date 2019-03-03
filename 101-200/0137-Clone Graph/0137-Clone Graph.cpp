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
     * @param node: A undirected graph node
     * @return: A undirected graph node
     */
    UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
        // write your code here
        if (node == nullptr)
        {
            return nullptr;
        }
        
        queue<UndirectedGraphNode *> Q;
        Q.push(node);
        table[node] = new UndirectedGraphNode(node->label);
        
        while (!Q.empty())
        {
            UndirectedGraphNode *p = Q.front();
            Q.pop();
            for (UndirectedGraphNode *n : p->neighbors)
            {
                if (table.find(n) == table.end())
                {
                    table[n] = new UndirectedGraphNode(n->label);
                    Q.push(n);
                }
                table[p]->neighbors.push_back(table[n]);
            }
        }
        
        return table[node];
    }
private:
    unordered_map<UndirectedGraphNode *, UndirectedGraphNode *> table;
};
