class Solution {
public:
    /**
     * @param org a permutation of the integers from 1 to n
     * @param seqs a list of sequences
     * @return true if it can be reconstructed only one or false
     */
    bool sequenceReconstruction(vector<int>& org, vector<vector<int>>& seqs) {
        // Write your code here
        int n = org.size();
        unordered_map<int, unordered_set<int>> graph;
        vector<int> degrees(1 + n);
        size_t maxSize = 0;
        for (auto& seq : seqs) {
            maxSize = max(maxSize, seq.size());
            for (int i = 0; i < seq.size(); ++i) {
                if (seq[i] < 1 || seq[i] > n) {
                    return false;
                }
                if (i == 0) {
                    continue;
                }
                if (!graph[seq[i - 1]].count(seq[i])) {
                    graph[seq[i - 1]].insert(seq[i]);
                    ++degrees[seq[i]];
                }
            }
        }
        
        if (maxSize == 0) {
            return n == 0;
        }
        
        int count = 0;
        queue<int> Q;
        for (int i = 1; i < degrees.size(); ++i) {
            if (degrees[i] == 0) {
                Q.push(i);
            }
        }
        
        while (Q.size() == 1) {
            int index = Q.front();
            Q.pop();
            ++count;
            for (int node : graph[index]) {
                if (--degrees[node] == 0) {
                    Q.push(node);
                }
            }
        }
        
        return count == n;
    }
};
