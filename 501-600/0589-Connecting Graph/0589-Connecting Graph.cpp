class ConnectingGraph {
public:
    ConnectingGraph(int n) {
        // initialize your data structure here.
        for (int i = 0; i < n; ++i) {
            parent.push_back(i);
        }
    }
        
    void  connect(int a, int b) {
        // Write your code here
        int pa = findParent(a - 1);
        int pb = findParent(b - 1);
        if (pa != pb) {
            parent[pa] = pb;
        }
    }

    bool query(int a, int b) {
        // Write your code here
        int pa = findParent(a - 1);
        int pb = findParent(b - 1);
        return pa == pb;
    }
    
private:
    vector<int> parent;
    int findParent(int n) {
        while (parent[n] != n) {
            parent[n] = parent[parent[n]];
            n = parent[n];
        }
        
        return n;
    }
};
