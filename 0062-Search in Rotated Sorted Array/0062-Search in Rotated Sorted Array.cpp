class Solution {
    /** 
     * param A : an integer ratated sorted array
     * param target :  an integer to be searched
     * return : an integer
     */
public:
    int search(vector<int> &A, int target) {
        // write your code here
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
            else if (A[start] <= A[mid])
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
            else
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
        }
        
        if (A[start] == target)
        {
            return start;
        }
        else if (A[end] == target)
        {
            return end;
        }
        else
        {
            return -1;
        }
    }
};
