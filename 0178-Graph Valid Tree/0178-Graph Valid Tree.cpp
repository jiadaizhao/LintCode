class Solution {
public:
    /**
     * @param n an integer
     * @param edges a list of undirected edges
     * @return true if it's a valid tree, or false
     */
    bool validTree(int n, vector<vector<int>>& edges) {
        // Write your code here
        if (n == 0)
        {
            return true;
        }
        
        if (edges.size() != n - 1)
        {
            return false;
        }
        
        vector<int> parent(n);
        for (int i = 0; i < n; ++i)
        {
            parent[i] = i;
        }
        
        for (auto edge : edges)
        {
            int x = edge[0];
            int y = edge[1];
            int xp = findParent(parent, x);
            int yp = findParent(parent, y);
            if (xp == yp)
            {
                return false;
            }
            
            parent[xp] = yp;
        }
        
        return true;
    }
    
private:
    int findParent(vector<int>& parent, int n)
    {
        while (parent[n] != n)
        {
            parent[n] = parent[parent[n]];
            n = parent[n];
        }
        
        return n;
    }
};
