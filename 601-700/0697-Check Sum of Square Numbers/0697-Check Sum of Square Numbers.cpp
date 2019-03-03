class Solution {
public:
    /*
     * @param : the given number
     * @return: whether whether there're two integers
     */
    bool checkSumOfSquareNumbers(int num) {
        // write your code here
        if (num < 0) {
            return false;
        }
        
        for (long i = 0; i * i * 2 <= num; ++i) {
            int j = num - i * i;
            int sroot = sqrt(j);
            if (sroot * sroot == j) {
                return true;
            }
        }
        
        return false;
    }
};
