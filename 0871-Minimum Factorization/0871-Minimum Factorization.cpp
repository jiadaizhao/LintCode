class Solution {
public:
    /**
     * @param a: a positive integer
     * @return: the smallest positive integer whose multiplication of each digit equals to a
     */
    int smallestFactorization(int a) {
        // Write your code here
        long long result = 0, base = 1;
        for (int i = 9; i >= 2; --i) {
            while (a % i == 0) {
                result += base * i;
                if (result > INT_MAX) return 0;
                base *= 10;
                a /= i;
            }
        }
        
        return (a == 1) ? result : 0;
    }
};
