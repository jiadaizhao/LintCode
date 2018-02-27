class Solution {
public:
    /**
     * @param inputA: Input stream A
     * @param inputB: Input stream B
     * @return: The answer
     */
    string inputStream(string &inputA, string &inputB) {
        // Write your code here
        string A;
        for (char c : inputA) {
            if (c == '<') {
                if (A.size()) {
                    A.pop_back();
                }
            }
            else {
                A += c;
            }
        }
        
        string B;
        for (char c : inputB) {
            if (c == '<') {
                if (B.size()) {
                    B.pop_back();
                }
            }
            else {
                B += c;
            }
        }
        
        return A == B ? "YES" : "NO";
    }
};
