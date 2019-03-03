class Solution {
public:
    /**
     * @param dividend the dividend
     * @param divisor the divisor
     * @return the result
     */
    int divide(int dividend, int divisor) {
        // Write your code here
        if (dividend == 0)
        {
            return 0;
        }
        
        if (dividend == INT_MIN && divisor == -1)
        {
            return INT_MAX;
        }
        
        int sign = 1;
        if ((dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0))
        {
            sign = -1;
        }

        long a = abs((long)dividend), b = abs((long)divisor);
        int result = 0;
        while (a >= b)
        {
            int shift = 0;
            while (a >= (b << shift))
            {
                ++shift;
            }
            
            a -= b << (shift - 1);
            result += 1 << (shift - 1);
        }
        
        return sign * result; 
    }
};
