class ConnectingGraph2 {
public:
    ConnectingGraph2(int n) {
        // initialize your data structure here.
        parent.resize(1 + n);
        parentSize.resize(1 + n);
        for (int i = 1; i <= n; ++i) {
            parent[i] = i;
            parentSize[i] = 1;
        }
    }
        
    void  connect(int a, int b) {
        // Write your code here
        int pa = findParent(a);
        int pb = findParent(b);
        if (pa != pb) {
            parent[pa] = pb;
            parentSize[pb] += parentSize[pa];
        }
    }

    int query(int a) {
        // Write your code here
        int pa = findParent(a);
        return parentSize[pa];
    }
    
private:
    vector<int> parent;
    vector<int> parentSize;
    int findParent(int n) {
        while (parent[n] != n) {
            parent[n] = parent[parent[n]];
            n = parent[n];
        }
        
        return n;
    }
};
