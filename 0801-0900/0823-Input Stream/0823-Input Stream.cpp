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

// O(1) Space
class Solution {
public:
    /**
     * @param inputA: Input stream A
     * @param inputB: Input stream B
     * @return: The answer
     */
    string inputStream(string &inputA, string &inputB) {
        // Write your code here
        int n1 = inputA.size(), n2 = inputB.size();
        int b1 = 0, b2 = 0, i = n1 - 1, j = n2 - 1;
        while (i >= 0 && j >= 0) {
            while (i >= 0) {
                if (inputA[i] == '<') {
                    ++b1;
                    --i;
                }
                else if (b1 > 0) {
                    --b1;
                    --i;
                }
                else {
                    break;
                }
            }
            
            while (j >= 0) {
                if (inputB[j] == '<') {
                    ++b2;
                    --j;
                }
                else if (b2 > 0) {
                    --b2;
                    --j;
                }
                else {
                    break;
                }
            }
            
            if (i >= 0) {
                if (j < 0 || inputA[i] != inputB[j]) {
                    return "NO";
                }
                --i;
                --j;
            }
            else if (j >= 0) {
                return "NO";
            }
        }
        return "YES";
    }
};
