class Solution {
public:
    /**
     * @param S: a string
     * @return:  return the minimum number of moves
     */
    int MinimumMoves(string &S) {
        // write your code here
        int minNum = 0, same = 1;
        for (int i = 1; i < S.size(); ++i) {
            if (S[i] == S[i - 1]) {
                ++same;
            }
            else {
                minNum += same / 3;
                same = 1;
            }
        }
        minNum += same / 3;
        return minNum;
    }
};
