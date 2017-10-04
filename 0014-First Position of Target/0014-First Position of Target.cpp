class Solution {
public:
    /**
     * @param nums: The integer array.
     * @param target: Target number to find.
     * @return: The first position of target. Position starts from 0. 
     */
    int binarySearch(vector<int> &array, int target) {
        // write your code here
        int n = array.size();
        if (n == 0)
        {
            return -1;
        }
        
        int start = 0, end = n - 1;
        while (start + 1 < end)
        {
            int mid = start + (end - start) / 2;
            if (array[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
        }
        
        if (array[start] == target)
        {
            return start;
        }
        else if (array[end] == target)
        {
            return end;
        }
        else
        {
            return -1;
        }
    }
};
