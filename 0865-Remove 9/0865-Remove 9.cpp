class Solution {
public:
    /**
     * @param n: an integer
     * @return: return an long integer
     */
    long long newInteger(int n) {
        // write your code here
        long long result = 0, base = 1;
        while (n) {
            result += (n % 9) * base;
            n /= 9;
            base *= 10;
        }
        
        return result;
    }
};
