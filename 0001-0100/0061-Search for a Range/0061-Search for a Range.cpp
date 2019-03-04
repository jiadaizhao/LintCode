class Solution {
    /** 
     *@param A : an integer sorted array
     *@param target :  an integer to be inserted
     *return : a list of length 2, [index1, index2]
     */
public:
    vector<int> searchRange(vector<int> &A, int target) {
        // write your code here
        vector<int> result(2, -1);
        if (A.size() == 0)
        {
            return result;
        }
        int start = 0, end = A.size() - 1;
        while (start + 1 < end)
        {
            int mid = start + (end - start) / 2;
            if (A[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
        }
        
        if (A[start] == target)
        {
            result[0] = start;
        }
        else if (A[end] == target)
        {
            result[0] = end;
        }
        else
        {
            return result;
        }
        
        start = 0, end = A.size() - 1;
        while (start + 1 < end)
        {
            int mid = start + (end - start) / 2;
            if (A[mid] <= target)
            {
                start = mid;
            }
            else
            {
                end = mid - 1;
            }
        }
        
        if (A[end] == target)
        {
            result[1] = end;
        }
        else if (A[start] == target)
        {
            result[1] = start;
        }
        
        return result;
    }
};
