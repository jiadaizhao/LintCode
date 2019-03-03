class Solution {
public:
    /**
     * @param x a double
     * @return the square root of x
     */
    double sqrt(double x) {
        // Write your code here
        double start = 0;
        double end = (x >= 1) ? x : 1;
        while (end - start > 1e-10) {
            double mid = (start + end) / 2;
            if (mid * mid < x) {
                start = mid;
            }
            else {
                end = mid;
            }
        }
        
        return start;
    }
};
