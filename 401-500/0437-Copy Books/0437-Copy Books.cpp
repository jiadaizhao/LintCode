class Solution {
public:
    /**
     * @param pages: a vector of integers
     * @param k: an integer
     * @return: an integer
     */
    int copyBooks(vector<int> &pages, int k) {
        // write your code here
        if (pages.size() == 0)
        {
            return 0;
        }
        int start = pages[0], end = 0;
        for (int p : pages)
        {
            start = max(start, p);
            end += p;
        }
        
        while (start + 1 < end)
        {
            int mid = start + (end - start) / 2;
            if (countP(pages, mid, k))
            {
                end = mid;
            }
            else
            {
                start = mid + 1;
            }
        }
        
        if (countP(pages, start, k))
        {
            return start;
        }
        else
        {
            return end;
        }
        
    }
private:
    bool countP(vector<int>& pages, int target, int k)
    {
        int sum = 0;
        int count = 1;

        for (int i = 0; i < pages.size(); ++i)
        {
            if (sum + pages[i] > target)
            {
                sum = pages[i];
                if (++count > k)
                {
                    return false;    
                }
            }
            else
            {
                sum += pages[i];
            }
        }
        
        return true;
    }
};
