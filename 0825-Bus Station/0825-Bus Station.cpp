class Solution {
public:
    /**
     * @param N: The number of buses
     * @param route: The route of buses
     * @param A: Start bus station
     * @param B: End bus station
     * @return: Return the minimum transfer number
     */
    int getMinTransferNumber(int N, vector<vector<int>> &route, int A, int B) {
        // Write your code here
        if (A == B) return 0;
        unordered_map<int, unordered_set<int>> stationToBus;
        unordered_set<int> visited;
        for (int i = 0; i < N; ++i) {
            for (int station : route[i]) {
                stationToBus[station].insert(i);
            }
        }
        
        queue<int> Q;
        Q.push(A);
        
        int step = 0;
        while (!Q.empty()) {
            int qs = Q.size();
            ++step;
            for (int i = 0; i < qs; ++i) {
                int s = Q.front();
                Q.pop();
                for (int nb : stationToBus[s]) {
                    if (!visited.count(nb)) {
                        visited.insert(nb);
                        for (int ns : route[nb]) {
                            if (ns == B) {
                                return step;
                            }
                            Q.emplace(ns);
                        }
                    }
                }
            }           
        }
        
        return -1;
    }
};
