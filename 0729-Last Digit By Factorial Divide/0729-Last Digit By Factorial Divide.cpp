class Solution {
public:
    /*
     * @param : the given number
     * @param : another number
     * @return: the last digit of B! / A! 
     */
    int computeLastDigit(long long A, long long B) {
        // write your code here
        if (B - A >= 5)
            return 0;
        long long result = 1;
        for (long long i = A + 1; i <= B; ++i) {
            result = (result * (i % 10)) % 10;
        }
        return result;
    }
};
