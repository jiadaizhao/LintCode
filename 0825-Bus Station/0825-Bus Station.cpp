struct pairhash {
    template<typename T, typename U>
    size_t operator()(const pair<T, U>& p) const {
        return hash<T>()(p.first) ^ hash<U>()(p.second);
    }
};

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
        vector<unordered_set<int>> busToStation(N);
        unordered_map<int, unordered_set<int>> stationToBus;
        unordered_set<pair<int, int>, pairhash> visited;
        for (int i = 0; i < N; ++i) {
            for (int station : route[i]) {
                busToStation[i].insert(station);
                stationToBus[station].insert(i);
            }
        }

        queue<Node> Q;
        for (int bus : stationToBus[A]) {
            Q.emplace(bus, A, 1);
            visited.insert({ bus, A });
        }

        while (!Q.empty()) {
            int b = Q.front().bus;
            int s = Q.front().station;
            int t = Q.front().transfer;
            Q.pop();
            for (int ns : busToStation[b]) {
                if (!visited.count({ b, ns })) {
                    if (ns == B) {
                        return t;
                    }
                    Q.emplace(b, ns, t);
                    visited.insert({ b, ns });
                }
            }

            for (int nb : stationToBus[s]) {
                if (!visited.count({ nb, s })) {
                    Q.emplace(nb, s, t + 1);
                    visited.insert({ nb, s });
                }
            }
        }
        return -1;
    }

private:
    struct Node {
        int bus;
        int station;
        int transfer;
        Node(int b, int s, int t) : bus(b), station(s), transfer(t) {}
    };
};
