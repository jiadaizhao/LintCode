class Solution {
public:
    /**
     * @param num: the rotated sorted array
     * @return: the minimum number in the array
     */
    int findMin(vector<int> &num) {
        // write your code here
        int start = 0, end = num.size() - 1;
        while (start + 1 < end)
        {
            int mid = start + (end - start) / 2;
            if (num[mid] < num[end])
            {
                end = mid;
            }
            else if (num[mid] == num[end])
            {
                --end;
            }
            else
            {
                start = mid + 1;
            }
        }
        
        return min(num[start], num[end]);
    }
};
