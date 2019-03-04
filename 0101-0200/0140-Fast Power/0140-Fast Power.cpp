class Solution {
public:
    /*
     * @param a, b, n: 32bit integers
     * @return: An integer
     */
    int fastPower(int a, int b, int n) {
        // write your code here
        if (n == 1)
        {
            return a % b;
        }
        else if (n == 0)
        {
            return 1 % b;
        }
        
        long long half = fastPower(a, b, n / 2);
        half = (half * half) % b;
        if (n % 2)
        {
            half *= a;
        }
        
        return half % b;
    }
};
