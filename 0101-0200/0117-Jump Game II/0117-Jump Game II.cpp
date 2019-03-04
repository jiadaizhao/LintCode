class Solution {
public:
    /**
     * @param A: A list of lists of integers
     * @return: An integer
     */
    int jump(vector<int> A) {
        // wirte your code here
        int step = 0;
        int maxIndex = 0, currentMax = 0;
        for (int i = 0; i < A.size() - 1;++i)
        {
            currentMax = max(currentMax, i + A[i]);
            if (i == maxIndex)
            {
                ++step;
                maxIndex = currentMax;
            }
        }
        
        return step;
    }
};
