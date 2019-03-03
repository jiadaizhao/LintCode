class Solution {
public:
    /**
     * @param A: lists A
     * @param B: lists B
     * @return: the index mapping
     */
    vector<int> anagramMappings(vector<int> &A, vector<int> &B) {
        // Write your code here
        unordered_map<int, int> table;
        for (int i = 0; i < B.size(); ++i) {
            table[B[i]] = i;
        }
        
        vector<int> result(A.size());
        for (int i = 0; i < A.size(); ++i) {
            result[i] = table[A[i]];
        }
        return result;
    }
};
