class ConnectingGraph3 {
public:
    ConnectingGraph3(int n) {
        // initialize your data structure here.
        parent.resize(1 + n);
        for (int i = 1; i <= n; ++i) {
            parent[i] = i;
        }
        count = n;
    }
        
    void  connect(int a, int b) {
        // Write your code here
        int pa = findParent(a);
        int pb = findParent(b);
        if (pa != pb) {
            parent[pa] = pb;
            --count;
        }
    }

    int query() {
        // Write your code here
        return count;
    }
    
private:
    vector<int> parent;
    int count;
    int findParent(int n) {
        while (parent[n] != n) {
            parent[n] = parent[parent[n]];
            n = parent[n];
        }
        
        return n;
    }
};
