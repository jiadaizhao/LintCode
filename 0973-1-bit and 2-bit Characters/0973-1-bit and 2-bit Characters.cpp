class Solution {
public:
    /**
     * @param bits: a array represented by several bits. 
     * @return: whether the last character must be a one-bit character or not
     */
    bool isOneBitCharacter(vector<int> &bits) {
        // Write your code here
        int n = bits.size(), i = 0;
        while (i < n - 1) {
            if (bits[i] == 0) {
                ++i;
            }
            else {
                i += 2;
            }
        }
        
        return i == n - 1;
    }
};
