class Solution {
public:
    /** 
     *@param A: A list of integers
     *@param elem: An integer
     *@return: The new length after remove
     */
    int removeElement(vector<int> &A, int elem) {
        // write your code here
        int start = 0, end = A.size() - 1;
        while (start <= end)
        {
            if (A[start] == elem)
            {
                swap(A[start], A[end]);
                --end;
            }
            else
            {
                ++start;
            }
        }
        
        return start;
    }
};
