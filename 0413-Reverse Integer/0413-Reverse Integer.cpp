class Solution {
public:
    /*
     * @param n: the integer to be reversed
     * @return: the reversed integer
     */
    int reverseInteger(int n) {
        // write your code here
        int sign = 1;
        if (n < 0) {
            sign = -1;
        }
        
        if (n == INT_MIN) {
            return 0;
        }
        n = abs(n);
        long result = 0;
        while (n) {
            result = result * 10 + n % 10;
            n /= 10;
        }
        
        if (result > INT_MAX) {
            return 0;
        }
        
        return result * sign;
    }
};
