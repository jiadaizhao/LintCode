class Solution{
public:
    /**
     * @param n: an integer
     * @return an integer f(n)
     */
    int fibonacci(int n) {
        // write your code here
        if (n == 1)
        {
            return 0;
        }
        
        if (n == 2)
        {
            return 1;
        }
        
        int f1 = 0;
        int f2 = 1;
        int f3;
        for (int i = 2; i < n; ++i)
        {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        
        return f3;
    }
};
