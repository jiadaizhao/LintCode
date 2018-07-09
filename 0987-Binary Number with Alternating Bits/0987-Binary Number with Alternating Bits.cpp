class Solution {
public:
    /**
     * @param n: a postive Integer
     * @return: if two adjacent bits will always have different values
     */
    bool hasAlternatingBits(int n) {
        // Write your code here
        int prev = n & 1;
        n >>= 1;
        while (n) {
            int curr = n & 1;
            if (curr == prev) {
                return false;
            }
            prev = curr;
            n >>= 1;
        }
        
        return true;
    }
};
