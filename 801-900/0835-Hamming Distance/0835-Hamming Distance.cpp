class Solution {
public:
    /**
     * @param x: an integer
     * @param y: an integer
     * @return: return an integer, denote the Hamming Distance between two integers
     */
    int hammingDistance(int x, int y) {
        // write your code here
        int z = x ^ y;
        int count = 0;
        while (z) {
            ++count;
            z &= z - 1;
        }
        return count;
    }
};
