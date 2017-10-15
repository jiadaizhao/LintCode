class Solution {
public:
    /**
     * @param S: A list of integers
     * @return: An integer
     */
    int triangleCount(vector<int> &S) {
        // write your code here
        if (S.size() < 3)
        {
            return 0;
        }
        sort(S.begin(), S.end());
        int count = 0;
        for (int i = 2; i < S.size(); ++i)
        {
            int start = 0, end = i - 1;
            while (start < end)
            {
                if (S[start] + S[end] > S[i])
                {
                    count += end - start;
                    --end;
                }
                else
                {
                    ++start;
                }
            }
        }
        
        return count;
    }
};
