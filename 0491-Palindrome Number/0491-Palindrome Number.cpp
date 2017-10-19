class Solution {
public:
    /*
     * @param num: a positive number
     * @return: true if it's a palindrome or false
     */
    bool isPalindrome(int num) {
        // write your code here
        if (num != 0 && num % 10 == 0) {
            return false;
        }
        
        int reverse = 0;
        while (num > reverse) {
            reverse = reverse * 10 + num % 10;
            num /= 10;
        }
        
        return num == reverse || reverse / 10 == num;
    }
};
