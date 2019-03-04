class Solution {
public:
    /**
     * @param a: The cost of the film
     * @param b: The price of the selling of the film
     * @param k: The principal
     * @return: The answer
     */
    int bigBusiness(vector<int> &a, vector<int> &b, int k) {
        // Write your code here
        priority_queue<Node> pq;
        for (int i = 0; i < a.size(); ++i) {
            pq.emplace(i, a[i]);
        }
        
        priority_queue<int> profitpq;
        while (true) {
            while (!pq.empty() && pq.top().royalty <= k) {
                int i = pq.top().index;
                pq.pop();
                if (b[i] > a[i]) {
                    profitpq.push(b[i] - a[i]);
                }
            }
            
            if (!profitpq.empty()) {
                int val = profitpq.top();
                profitpq.pop();
                k += val;
            }
            else {
                break;
            }
        }
        return k;
    }
    
private:
    struct Node {
        int index;
        int royalty;
        Node(int i, int r): index(i), royalty(r){}
        bool operator < (const Node& node) const {
            return royalty > node.royalty;
        }
    };
};
