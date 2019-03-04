class Solution {
public:
    /*
     * @param : an int
     * @param : an int
     * @return: if N can be expressed in the form of sum of K primes, return true; otherwise, return false.
     */
    bool isSumOfKPrimes(int n, int k) {
        // write your code here
        if (n < k * 2 || k <= 0) {
            return false;
        }
        
        if (k == 1) {
            return isPrime(n);
        }
        if (k == 2) {
            if (n % 2 == 0) {
                return true;
            }
            return isPrime(n - 2);
        }
        return true;
    }
    
private:
    bool isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        else if (n == 2) {
            return true;
        }
        
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
};
