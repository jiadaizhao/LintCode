class Solution {
public:
    /**
     * @param n: a number represent year
     * @return: whether year n is a leap year.
     */
    bool isLeapYear(int n) {
        // write your code here
        return (n % 4 == 0 && n % 100) || (n % 400 == 0);
    }
};
