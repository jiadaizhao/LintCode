class Solution {
public:
    /**
     * @param a: the given number
     * @param b: another number
     * @return: the greatest common divisor of two numbers
     */
    int gcd(int a, int b) {
        // write your code here
        while (b) {
            int temp = a;
            a = b;
            b = temp % a;
        }
        return a;
    }
};
