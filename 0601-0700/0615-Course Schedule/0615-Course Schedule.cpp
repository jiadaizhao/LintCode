class Solution {
public:
    /**
     * @param numCourses a total of n courses
     * @param prerequisites a list of prerequisite pairs
     * @return true if can finish all courses or false
     */
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
        // Write your code here
        vector<unordered_set<int>> graph(numCourses);
        for (auto p : prerequisites) {
            graph[p.second].insert(p.first);
        }
        
        vector<int> degrees(numCourses);
        for (auto& g : graph){
            for (int node : g) {
                ++degrees[node];
            }
        }
        
        queue<int> Q;
        for (int i = 0; i < numCourses; ++i) {
            if (degrees[i] == 0) {
                Q.push(i);
            }
        }
        
        int count = 0;
        while (!Q.empty()) {
            int course = Q.front();
            ++count;
            Q.pop();
            for (int node : graph[course]) {
                if (--degrees[node] == 0) {
                    Q.push(node);
                }
            }
        }
        
        return count == numCourses;
    }
};
