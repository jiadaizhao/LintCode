class Solution {
public:
    /**
     * @param pid: the process id
     * @param ppid: the parent process id
     * @param kill: a PID you want to kill
     * @return: a list of PIDs of processes that will be killed in the end
     */
    vector<int> killProcess(vector<int> &pid, vector<int> &ppid, int kill) {
        // Write your code here
        unordered_map<int, vector<int>> children;
        for (int i = 0; i < ppid.size(); ++i) {
            children[ppid[i]].push_back(pid[i]);
        }
        
        vector<int> result;
        queue<int> Q;
        Q.push(kill);
        while (!Q.empty()) {
            int p = Q.front();
            Q.pop();
            result.push_back(p);
            for (int child : children[p]) {
                Q.push(child);
            }
        }
        return result;
    }
};
