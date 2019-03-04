class Solution {
public:
    /**
     * @param str: the string that needs to be sorted
     * @return: sorted string
     */
    string stringSort(string &str) {
        // Write your code here
        unordered_map<char, int> table;
        for (char c : str) {
            ++table[c];
        }
        
        priority_queue<Node> pq;
        for (auto t : table) {
            pq.emplace(t.first, t.second);
        }
        
        string result;
        while (!pq.empty()) {
            result += string(pq.top().count, pq.top().c);
            pq.pop();
        }
        
        return result;        
    }
    
private:
    struct Node {
        char c;
        int count;
        Node(char cc, int cn): c(cc), count(cn){}
        bool operator < (const Node& node) const {
            if (count == node.count) {
                return c > node.c;
            }
            return count < node.count;
        }
    };
};
