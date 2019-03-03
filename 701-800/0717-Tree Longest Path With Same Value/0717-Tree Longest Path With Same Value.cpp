class Solution {
public:
    /*
     * @param : as indicated in the description
     * @param : as indicated in the description
     * @return: Return the number of edges on the longest path with same value.
     */
    int LongestPathWithSameValue(vector<int> &A, vector<int> &E) {
        // write your code here
        int n = A.size();
        if (n == 0 || n == 1) {
            return 0;
        }
        edges = vector<unordered_set<int>>(1 + n);
        for (int j = 0; j < n - 1; ++j) {
            edges[E[2 * j]].insert(E[2 * j + 1]);
            edges[E[2 * j + 1]].insert(E[2 * j]);
        }
        
        maxLen = 0;
        dfs(A, 1, 0);
        return maxLen;
    }
    
private:
    int maxLen;
    vector<unordered_set<int>> edges;
    int dfs(vector<int> &A, int start, int prev) {
        int currMax1 = 0, currMax2 = 0;
        for (int next : edges[start]) {
            if (next == prev) {
                continue;
            }
            int len = dfs(A, next, start);
            if (A[start - 1] == A[next - 1]) {
                if (1 + len > currMax1) {
                    currMax2 = currMax1;
                    currMax1 = 1 + len;
                }
                else if (1 + len > currMax2) {
                    currMax2 = 1 + len;
                }
            }
        }
        
        maxLen = max(maxLen, currMax1 + currMax2);
        return currMax1;
    }
};
