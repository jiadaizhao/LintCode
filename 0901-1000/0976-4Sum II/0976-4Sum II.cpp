class Solution {
public:
    /**
     * @param A: a list
     * @param B: a list
     * @param C: a list
     * @param D: a list
     * @return: how many tuples (i, j, k, l) there are such that A[i] + B[j] + C[k] + D[l] is zero
     */
    int fourSumCount(vector<int> &A, vector<int> &B, vector<int> &C, vector<int> &D) {
        // Write your code here
        unordered_map<int, int> table;
        for (int a : A) {
            for (int b : B) {
                ++table[a + b];
            }
        }
        
        int count = 0;
        for (int c : C) {
            for (int d : D) {
                count += table[-c-d];
            }
        }
        
        return count;
    }
};
