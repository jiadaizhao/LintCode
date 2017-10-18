class Solution {
public:
    /**
     * @param A an integer array sorted in ascending order
     * @param target an integer
     * @return an integer
     */
    int closestNumber(vector<int>& A, int target) {
        // Write your code here
        if (A.size() == 0)
        {
            return -1;
        }
        
        int start = 0, end = A.size() - 1;
        while (start + 1 < end)
        {
            int mid = start + (end - start) / 2;
            if (A[mid] == target)
            {
                return mid;
            }
            else if (A[mid] < target)
            {
                start = mid;
            }
            else
            {
                end = mid;
            }
        }
        
        if (abs(A[start] - target) < abs(A[end]- target))
        {
            return start;
        }
        else
        {
            return end;
        }
    }
};
