class Solution {
public:
    /**
     * @param tasks: the given char array representing tasks CPU need to do
     * @param n: the non-negative cooling interval
     * @return: the least number of intervals the CPU will take to finish all the given tasks
     */
    int leastInterval(string &tasks, int n) {
        // write your code here
        int m = tasks.size();
        vector<int> counts(26);
        for (char c : tasks) {
            ++counts[c - 'A'];
        }
        int maxFreq = 0, maxCount = 0;
        for (int count : counts) {
            if (count > maxCount) {
                maxCount = count;
                maxFreq = 1;
            }
            else if (count == maxCount) {
                ++maxFreq;
            }
        }
        return max(m, (maxCount - 1) * (n + 1) + maxFreq);
    }
};
