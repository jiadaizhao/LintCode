class Solution {
public:
    /**
     * @param number: A 3-digit number.
     * @return: Reversed number.
     */
    int reverseInteger(int number) {
        // write your code here
        return (number % 10) * 100 + (number / 10 % 10) * 10 + (number / 100);
    }
};
