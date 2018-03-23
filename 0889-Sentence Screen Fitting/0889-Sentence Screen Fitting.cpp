class Solution {
public:
    /**
     * @param sentence: a list of string
     * @param rows: an integer
     * @param cols: an integer
     * @return: return an integer, denote times the given sentence can be fitted on the screen
     */
    int wordsTyping(vector<string> &sentence, int rows, int cols) {
        // Write your code here
        string s;
        for (string sen : sentence) {
            s += sen + ' ';
        }
        int n = s.size(), start = 0;
        for (int i = 0; i < rows; ++i) {
            start += cols;
            if (s[start % n] == ' ') {
                ++start;
            }
            else {
                while (start > 0 && s[(start - 1) % n] != ' ') {
                    --start;
                }
            }
        }
        return start / n;
    }
};
