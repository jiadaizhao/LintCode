class Solution {
public:
    /**
    * @param n: maximum index of position.
    * @param m: the number of undirected edges.
    * @param x:
    * @param y:
    * @param w:
    * @return: return the minimum risk value.
    */
    int getMinRiskValue(int n, int m, vector<int> &x, vector<int> &y, vector<int> &w) {
        // Write your code here
        vector<int> parent(1 + n);
        for (int i = 0; i <= n; ++i) {
            parent[i] = i;
        }

        vector<Edge> edges(m);
        for (int i = 0; i < m; ++i) {
            edges[i] = Edge(x[i], y[i], w[i]);
        }

        sort(edges.begin(), edges.end());
        int result = -1;
        for (int i = 0; i < m; ++i) {
            int p1 = findParent(parent, edges[i].x);
            int p2 = findParent(parent, edges[i].y);
            if (p1 != p2) {
                parent[p2] = p1;
                int p0 = findParent(parent, 0);
                int pn = findParent(parent, n);
                if (p0 == pn) {
                    result = edges[i].w;
                    break;
                }
            }
        }
        return result;
    }

private:
    struct Edge {
        int x, y, w;
        Edge(int xx = 0, int yy = 0, int ww = 0) : x(xx), y(yy), w(ww) {}
        bool operator < (const Edge &e) const {
            return w < e.w;
        }
    };
    int findParent(vector<int>& parent, int i) {
        while (parent[i] != i) {
            parent[i] = parent[parent[i]];
            i = parent[i];
        }
        return i;
    }
};
