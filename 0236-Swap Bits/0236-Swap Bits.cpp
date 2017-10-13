class Solution {
public:
    /**
     * @param x an integer
     * @return an integer
     */
    int swapOddEvenBits(int x) {
        // Write your code here
        return (((x & 0xaaaaaaaa) >> 1) | ((x & 0x55555555) << 1));
    }
};
