class Solution {
public:
    /**
     * @param x: An integer
     * @return: The sqrt of x
     */
    int sqrt(int x) {
        // write your code here
        long start = 0, end = x;
        while (start + 1 < end)
        {
            long mid = start + (end - start) / 2;
            if (mid * mid == x)
            {
                return mid;
            }
            else if (mid * mid < x)
            {
                start = mid;
            }
            else
            {
                end = mid - 1;
            }
        }
        
        if (end * end <= x)
        {
            return end;
        }
        else
        {
            return start;
        }
    }
};
