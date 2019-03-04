class Solution {
public:
    /*
     * @param n: a positive integer
     * @param primes: the given prime list
     * @return: the nth super ugly number
     */
    int nthSuperUglyNumber(int n, vector<int> &primes) {
        // write your code here
        vector<int> ugly(n);
        ugly[0] = 1;
        priority_queue<Cell> pq;
        for (int p : primes) {
            pq.emplace(0, p, p);
        }
        
        for (int i = 1; i < n; ++i) {
            ugly[i] = pq.top().val;
            while (!pq.empty() && pq.top().val == ugly[i]) {
                int index = pq.top().index;
                int prime = pq.top().prime;
                int val = pq.top().val;
                pq.pop();
                pq.emplace(index + 1, prime, prime * ugly[index + 1]);
            }
        }
        
        return ugly[n - 1];
    }
    
private:
    struct Cell {
        int index;
        int prime;
        int val;
        Cell(int i, int p, int v): index(i), prime(p), val(v) {}
        bool operator < (const Cell &c) const {
            return val > c.val;
        }
    };
};
