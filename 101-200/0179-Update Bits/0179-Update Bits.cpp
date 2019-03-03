class Solution {
public:
    /**
     *@param n, m: Two integer
     *@param i, j: Two bit positions
     *return: An integer
     */
    int updateBits(int n, int m, int i, int j) {
        // write your code here
        unsigned int mask = ((1LL << (j + 1)) - 1) ^ ((1 << i) - 1);
        return (n & (~mask)) | (m << i);
    }
};
