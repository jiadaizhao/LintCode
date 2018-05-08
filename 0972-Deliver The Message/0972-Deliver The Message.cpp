class Solution {
public:
    /**
     * @param t: the time of each employee to pass a meeage
     * @param subordinate: the subordinate of each employee
     * @return: the time of the last staff recieve the message
     */
    int deliverMessage(vector<int> &t, vector<vector<int>> &subordinate) {
        // Write your code here
        int n = t.size(), time = 0;
        vector<int> visited(n);
        queue<int> Q;
        Q.push(0);
        while (!Q.empty()) {
            int index = Q.front();
            Q.pop();
            for (int sub : subordinate[index]) {
                if (sub != -1) {
                    visited[sub] = visited[index] + t[index];
                    time = max(time, visited[sub]);
                    Q.push(sub);
                }
            }
        }
        return time;
    }
};
