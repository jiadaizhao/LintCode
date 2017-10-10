class Solution {
public:
    /**
     * @param A: Given an integer array
     * @return: void
     */
    void heapify(vector<int> &A) {
        // write your code here
        int n = A.size();
        if (n == 0)
        {
            return;
        }
        
        for (int i = n / 2 - 1; i >= 0; --i)
        {
            heapifyHelper(A, i);
        }
    }
private:
    void heapifyHelper(vector<int> &A, int i)
    {
        int minIndex = i;
        int n = A.size();
        while (i * 2 + 1 < n)
        {
            int left = i * 2 + 1;
            if (left < n && A[left] < A[minIndex])
            {
                minIndex = left;
            }
            int right = i * 2 + 2;
            if (right < n && A[right] < A[minIndex])
            {
                minIndex = right;
            }
            
            if (minIndex != i)
            {
                swap(A[i], A[minIndex]);
                i = minIndex;
            }
            else
            {
                break;
            }
        }
    }
};
