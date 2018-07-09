class Solution {
public:
    /**
     * @param n: The number of 'A'
     * @return: the minimum number of steps to get n 'A'
     */
    int minSteps(int n) {
        // Write your code here
        int s = 0;
        for (int i = 2; i <= n; ++i) {
            while (n % i == 0) {
                s += i;
                n /= i;
            }
        }
        
        return s;
    }
};
