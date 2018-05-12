class Solution {
public:
    /**
     * @param x: The vertexes of the edges
     * @param y: The vertexes of the edges
     * @return: Return the index of barycentre
     */
    int getBarycentre(vector<int> &x, vector<int> &y) {
        // Write your code here
        int n = x.size() + 1;
        vector<int> degrees(n);
        vector<vector<int>> graph(n);
        for (int i = 0; i < x.size(); ++i) {
            graph[x[i] - 1].push_back(y[i] - 1);
            graph[y[i] - 1].push_back(x[i] - 1);
            ++degrees[x[i] - 1];
            ++degrees[y[i] - 1];
        }
        
        priority_queue<Node> pq;
        vector<int> counts(n);
        for (int i = 0; i < n; ++i) {
            if (degrees[i] == 1) {
                --degrees[i];
                pq.emplace(i, 1);
            }
        }

        while (pq.size() > 1) {
            int val = pq.top().val;
            int count = pq.top().count;
            pq.pop();
            for (int neighbor : graph[val]) {
                if (degrees[neighbor] > 0) {
                    --degrees[neighbor];
                    if (degrees[neighbor] == 1) {
                        --degrees[neighbor];
                        pq.emplace(neighbor, counts[neighbor] + 1);
                    }
                    else {
                        counts[neighbor] += count;
                    }
                }
            }
        }
        
        return pq.top().val + 1;
    }
    
private:
    struct Node {
        int val;
        int count;
        Node(int v, int c): val(v), count(c){}
        bool operator < (const Node& node) const {
            if (count == node.count) {
                return val < node.val;
            }
            return count > node.count;
        }
    };
};
