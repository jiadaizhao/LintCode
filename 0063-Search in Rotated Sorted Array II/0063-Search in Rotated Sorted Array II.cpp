class Solution {
    /** 
     * param A : an integer ratated sorted array and duplicates are allowed
     * param target :  an integer to be search
     * return : a boolean 
     */
public:
    bool search(vector<int> &A, int target) {
        // write your code here
        if (A.size() == 0)
        {
            return false;
        }
        
        int start = 0, end = A.size() - 1;
        while (start + 1 < end)
        {
            int mid = start + (end - start) / 2;
            if (A[mid] == target)
            {
                return true;
            }
            else if (A[start] < A[mid])
            {
                if (A[start] <= target && target < A[mid])
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
            else if (A[mid] < A[end])
            {
                if (A[mid] < target && target <= A[end])
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
            else if (A[start] == A[mid])
            {
                ++start;
            }
            else
            {
                --end;
            }
        }
        
        return A[start] == target || A[end] == target;
    }
};
