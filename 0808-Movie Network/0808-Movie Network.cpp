class Solution {
public:
    /**
     * @param rating: the rating of the movies
     * @param G: the realtionship of movies
     * @param S: the begin movie
     * @param K: top K rating 
     * @return: the top k largest rating moive which contact with S
     */
    vector<int> topKMovie(vector<int> &rating, vector<vector<int>> &G, int S, int K) {
        // Write your code here
        int n = rating.size();
        vector<int> parent(n);
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
        }
        
        for (int i = 0; i < n; ++i) {
            for (int v : G[i]) {
                int p1 = findParent(parent, i);
                int p2 = findParent(parent, v);
                if (p1 != p2) {
                    parent[p2] = p1;
                }
            }
        }
        
        int p = findParent(parent, S);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for (int i = 0; i < n; ++i) {
            if (i != S && findParent(parent, i) == p) {
                pq.emplace(rating[i], i);
                if (pq.size() > K) {
                    pq.pop();
                }
            }
        }
        
        vector<int> result;
        while (!pq.empty()) {
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
    
private:
    int findParent(vector<int>& parent, int i) {
        while (parent[i] != i) {
            parent[i] = parent[parent[i]];
            i = parent[i];
        }
        return i;
    }
};
