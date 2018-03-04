class Solution {
public:
    /**
     * @param deadends: the list of deadends
     * @param target: the value of the wheels that will unlock the lock
     * @return: the minimum total number of turns 
     */
    int openLock(vector<string> &deadends, string &target) {
        // Write your code here
        unordered_set<string> dead;
        for (string s : deadends) {
            dead.insert(s);
        }
        if (dead.count("0000")) {
            return -1;
        }
        if (target == "0000") {
            return 0;
        }
        unordered_set<string> visited;
        queue<string> Q;
        Q.push("0000");
        visited.insert("0000");
        int count = 0;
        while (!Q.empty()) {
            ++count;
            int qs = Q.size();
            for (int i = 0; i < qs; ++i) {
                string s = Q.front();
                Q.pop();
                for (int j = 0; j < s.size(); ++j) {
                    for (int k = -1; k < 2; k += 2) {
                        string temp(s);
                        temp[j] = '0' + (temp[j] - '0' + k + 10) % 10;
                        
                        if (!dead.count(temp) && !visited.count(temp)) {
                            if (temp == target) {
                                return count;
                            }
                            Q.push(temp);
                            visited.insert(temp);
                        }
                    }
                }
            }
        }
        return -1;
    }
};
