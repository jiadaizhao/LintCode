class Solution {
public:
    /*
     * @param x: the base number
     * @param n: the power number
     * @return: the result
     */
    double myPow(double x, int n) {
        // write your code here
        if (n == 0) {
            return 1;
        }
        
        long ln = n;
        if (ln < 0) {
            x = 1 / x;
            ln = -ln;
        }
        double result = 1;
        while (ln) {
            if (ln % 2) {
                result *= x;
            }
            
            x *= x;
            ln >>= 1;
        }
        
        return result;
    }
};
