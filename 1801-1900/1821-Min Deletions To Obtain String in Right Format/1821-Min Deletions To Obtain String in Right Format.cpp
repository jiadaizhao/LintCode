class Solution {
public:
    /**
     * @param s: the string
     * @return: Min Deletions To Obtain String in Right Format
     */
    int minDeletionsToObtainStringInRightFormat(string &s) {
        // write your code here
        int minDel = 0, countB = 0;
        for (char c : s) {
            if (c == 'B') {
                ++countB;
            }
            else {
                minDel = min(minDel + 1, countB);
            }
        }
        
        return minDel;
    }
};
