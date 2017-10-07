class Solution {
public:
    /**
     * @param A: An integer array.
     * @param B: An integer array.
     * @return: a double whose format is *.5 or *.0
     */
    double findMedianSortedArrays(vector<int> A, vector<int> B) {
        // write your code here
        int num = A.size() + B.size();
        if (num % 2)
        {
            return find_kth(A, 0, B, 0, num / 2 + 1);
        }
        else
        {
            return (find_kth(A, 0, B, 0, num / 2) + find_kth(A, 0, B, 0, num / 2 + 1)) / 2.0;
        }
    }
private:
    int find_kth(vector<int>& A, int startA, vector<int>& B, int startB, int k)
    {
        if (startA >= A.size())
        {
            return B[startB + k - 1];
        }
        
        if (startB >= B.size())
        {
            return A[startA + k - 1];
        }
        
        if (k == 1)
        {
            return min(A[startA], B[startB]);
        }
        
        int stepA = min((int)A.size() - startA, k / 2);
        int stepB = min((int)B.size() - startB, k / 2);
        if (A[startA + stepA - 1] < B[startB + stepB - 1])
        {
            return find_kth(A, startA + stepA, B, startB, k - stepA);
        }
        else
        {
            return find_kth(A, startA, B, startB + stepB, k - stepB);
        }
    }
};
