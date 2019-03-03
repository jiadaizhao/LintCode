class Solution {
public:
    /** 
     *@param L: Given n pieces of wood with length L[i]
     *@param k: An integer
     *return: The maximum length of the small pieces.
     */
    int woodCut(vector<int>& L, int k) {
        // write your code here
        int maxLen = 0;
        for (int i : L)
        {
            maxLen = max(maxLen, i);
        }
        
        if (maxLen == 0)
        {
            return 0;
        }
        
        int start = 1, end = maxLen;
        while (start + 1 < end)
        {
            int mid = start + (end - start) / 2;
            if (count(L, mid) < k)
            {
                end = mid;
            }
            else
            {
                start = mid;
            }
        }
        
        if (count(L, end) >= k)
        {
            return end;
        }
        else if (count(L, start) >= k)
        {
            return start;
        }
        else
        {
            return 0;
        }
    }
private:
    int count(vector<int>& L, int target)
    {
        int sum = 0;
        for (int i : L)
        {
            sum += i / target;
        }
        return sum;
    }
};
