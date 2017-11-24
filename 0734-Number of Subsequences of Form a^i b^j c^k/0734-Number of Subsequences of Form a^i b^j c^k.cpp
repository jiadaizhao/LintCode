class Solution {
public:
    /*
     * @param : the input string
     * @return: the number of subsequences 
     */
    int countSubsequences(string &source) {
        // write your code here
        int aCount = 0, bCount = 0, cCount = 0;
        for (char c : source) {
            if (c == 'a') {
                aCount = 1 + aCount * 2;
            }
            else if (c == 'b') {
                bCount = aCount + bCount * 2;
            }
            else if (c == 'c') {
                cCount = bCount + cCount * 2;
            }
        }
        return cCount;
    }
};
