class Solution {
public:
    /**
     * @param n: an integer
     * @param times: a vector of integers
     * @return: an integer
     */
    int copyBooksII(int n, vector<int> &times) {
        // write your code here
        int minTime = 0;
        int maxTime = times[0];
        for (int t : times)
        {
            minTime = min(minTime, t);
            maxTime = max(maxTime, t);
        }

        int start = minTime * n;
        int end = maxTime * n;
        while (start + 1 < end)
        {
            int mid = start + (end - start) / 2;
            if (countP(times, mid, n))
            {
                end = mid;
            }
            else
            {
                start = mid + 1;
            }
        }

        if (countP(times, start, n))
        {
            return start;
        }
        else
        {
            return end;
        }
    }
    
private:
    bool countP(vector<int>& times, int target, int n)
    {
        int count = 0;

        for (int t : times)
        {
            count += target / t;
        }

        return count >= n;
    }
};
