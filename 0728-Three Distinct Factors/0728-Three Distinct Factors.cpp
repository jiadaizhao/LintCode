class Solution {
public:
    /*
     * @param : the given number
     * @return:  return true if it has exactly three distinct factors, otherwise false
     */
    bool isThreeDisctFactors(long long n) {
        // write your code here
        long long sqrtn = sqrt(n);
        if (sqrtn * sqrtn != n)
            return false;
        return isPrime(sqrtn);
    }
    
private:
    bool isPrime(long long n) {
        if (n <= 1)
            return false;
        if (n <= 3)
            return true;
     
        if (n % 2 == 0 || n % 3 == 0)
            return false;
     
        for (int i = 5; i * i <= n; i += 6)
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
     
        return true;
    }
};
