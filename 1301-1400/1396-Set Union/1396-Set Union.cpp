class Solution {
public:
    /**
     * @param sets: Initial set list
     * @return: The final number of sets
     */
    int setUnion(vector<vector<int>> &sets) {
        // Write your code here
        vector<int> parents(100001, -1);
        for (auto s : sets) {
            for (int i : s) {
                parents[i] = i;
            }
        }
        
        for (auto s : sets) {
            int p1 = findParent(parents, s[0]);
            for (int i = 1; i < s.size(); ++i) {
                int p2 = findParent(parents, s[i]);
                if (p1 != p2) {
                    parents[p2] = p1;
                }
            }
        }
        
        int count = 0;
        for (int i = 0; i <= 100000; ++i) {
            if (parents[i] == i) {
                ++count;
            }
        }
        return count;
    }
    
private:
    int findParent(vector<int>& parents, int i) {
        while (parents[i] != i) {
            parents[i] = parents[parents[i]];
            i = parents[i];
        }
        return i;
    }
};
