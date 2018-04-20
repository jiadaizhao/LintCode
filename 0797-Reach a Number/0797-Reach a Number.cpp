class Solution {
public:
    /**
     * @param target: the destination
     * @return: the minimum number of steps
     */
    int reachNumber(int target) {
        // Write your code here
        int sum = 0;
        target = abs(target);
        int step = 0;
        while (sum < target) {
            sum += ++step;
        }
        return (sum - target) % 2 == 0 ? step : step + 1 + step % 2;
    }
};
