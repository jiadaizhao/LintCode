class Solution {
public:
    /**
     * @param n: a non-negative integer
     * @return: the total number of full staircase rows that can be formed
     */
    int arrangeCoins(int n) {
        // Write your code here
        return (sqrt(1 + 8LL * n) - 1) / 2;
    }
};
