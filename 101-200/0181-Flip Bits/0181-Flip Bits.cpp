class Solution {
public:
    /**
     *@param a, b: Two integer
     *return: An integer
     */
    int bitSwapRequired(int a, int b) {
        // write your code here
        int c = a ^ b;
        int count = 0;
        while (c)
        {
            ++count;
            c &= c - 1;
        }
        
        return count;
    }
};
