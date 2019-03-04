class Solution {
public:
    /**
     * @param A and B: sorted integer array A and B.
     * @return: A new sorted integer array
     */
    vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
        // write your code here
        vector<int> result(A.size() + B.size());
        int i = 0, j = 0, k = 0;
        while (i < A.size() && j < B.size())
        {
            if (A[i] <= B[j])
            {
                result[k++] = A[i++];
            }
            else
            {
                result[k++] = B[j++];
            }
        }
        
        while (i < A.size())
        {
            result[k++] = A[i++];
        }
        
        while (j < B.size())
        {
            result[k++] = B[j++];
        }
        
        return result;
    }
};
