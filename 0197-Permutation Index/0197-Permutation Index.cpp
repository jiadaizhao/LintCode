class Solution {
public:
    /**
     * @param A an integer array
     * @return a long integer
     */
    long long permutationIndex(vector<int>& A) {
        // Write your code here
        int n = A.size();
        if (n == 0)
        {
            return 0;
        }
        
        long long index = 1;
        long long factor = 1;
        for (int i = n - 2; i >= 0; --i)
        {
            int rank = 0;
            for (int j = i + 1; j < n; ++j)
            {
                if (A[j] < A[i])
                {
                    ++rank;
                }
            }
            
            index += rank * factor;
            factor *= (n - i);
        }
        
        return index;
    }
};
