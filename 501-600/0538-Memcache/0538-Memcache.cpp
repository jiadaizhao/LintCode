class Memcache {
public:
    Memcache() {
        // initialize your data structure here.
    }

    int get(int curtTime, int key) {
        // Write your code here
        if (table.find(key) == table.end()) {
            return INT_MAX;
        }
        
        Node* node = table[key];
        if (node->ttl && node->curtTime + node->ttl <= curtTime) {
            return INT_MAX;
        } else {
            return node->val;
        }
    }

    void set(int curtTime, int key, int value, int ttl) {
        // Write your code here
        table[key] = new Node(curtTime, value, ttl);
    }

    void del(int curtTime, int key) {
        // Write your code here
        table.erase(key);
    }
    
    int incr(int curtTime, int key, int delta) {
        // Write your code here
        if (table.find(key) == table.end()) {
            return INT_MAX;
        }
        
        Node* node = table[key];
        if (node->ttl && node->curtTime + node->ttl <= curtTime) {
            return INT_MAX;
        } else {
            return node->val += delta;
        }
    }
    
    int decr(int curtTime, int key, int delta) {
        // Write your code here
        if (table.find(key) == table.end()) {
            return INT_MAX;
        }
        
        Node* node = table[key];
        if (node->ttl && node->curtTime + node->ttl <= curtTime) {
            return INT_MAX;
        } else {
            return node->val -= delta;
        }
    }
    
private:
    struct Node {
        int curtTime;
        int val;
        int ttl;
        Node () {}
        Node (int ct, int v, int t): curtTime(ct), val(v), ttl(t) {}
    };
    
    unordered_map<int, Node*> table;
};
