class Solution {
public:
    /**
     * @param A: An integer array.
     * @return: void
     */
    void rerange(vector<int> &A) {
        // write your code here
        int n = A.size();
        if (n == 0)
        {
            return;
        }
        int posNum = 0, negNum = 0;
        for (int num : A)
        {
            if (num >= 0)
            {
                ++posNum;
            }
            else
            {
                ++negNum;
            }
        }
        
        int pos = (posNum >= negNum) ? 0 : 1;
        int neg = 1 - pos;
        while (pos < n && neg < n)
        {
            while (pos < n && A[pos] > 0)
            {
                pos += 2;
            }
            while (neg < n && A[neg] < 0)
            {
                neg += 2;
            }
            if (pos < n && neg < n)
            {
                swap(A[pos], A[neg]);
                pos += 2;
                neg += 2;
            }
        }
    }
};
