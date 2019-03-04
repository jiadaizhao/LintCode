class Solution {
public:
    /**
     * @param gas: a vector of integers
     * @param cost: a vector of integers
     * @return: an integer 
     */
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
        // write your code here
        int n = gas.size();
        int total = 0;
        for (int i = 0; i < n; ++i) {
            total += gas[i] - cost[i];
        }
        
        if (total < 0) {
            return -1;
        }
        
        int sum = 0;
        int start = 0;
        for (int i = 0; i < n; ++i) {
            sum += gas[i] - cost[i];
            if (sum < 0) {
                sum = 0;
                start = i + 1;
            }
        }
        
        return start;
    }
};
