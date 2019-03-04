class Solution {
public:
    /*
     * @param : the given number
     * @return: Sum of elements in subsets
     */
    long subSum(int n) {
        // write your code here
        long sum = (1 + n) * n / 2;
        return (1 << (n - 1)) * sum;
    }
};
