class Solution {
public:
    /*
     * @param A: An integer array
     * @param B: An integer array
     * @return: Cosine similarity
     */
    double cosineSimilarity(vector<int> &A, vector<int> &B) {
        // write your code here
        int sum = 0;
        int n = A.size();
        for (int i = 0; i < n; ++i) {
            sum += A[i] * B[i];
        }
        
        int p1 = 0;
        for (int i = 0; i < n; ++i) {
            p1 += A[i] * A[i];
        }
        
        if (p1 == 0) {
            return 2;
        }
        
        int p2 = 0;
        for (int i = 0; i < n; ++i) {
            p2 += B[i] * B[i];
        }
        
        if (p2 == 0) {
            return 2;
        }
        
        return sum / sqrt(p1 * 1.0) / sqrt(p2 * 1.0);
    }
};
