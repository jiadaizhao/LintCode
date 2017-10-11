class Solution{
public:
    /**
     * @param colors: A list of integer
     * @param k: An integer
     * @return: nothing
     */    
    void sortColors2(vector<int> &colors, int k) {
        // write your code here
        if (colors.size() == 0 || k <= 0)
        {
            return;
        }
        
        partition(colors, 1, k, 0, colors.size() - 1);
    }
private:
    void partition(vector<int> &colors, int start, int end, int left, int right)
    {
        if (start >= end || left >= right)
        {
            return;
        }
        
        int mid = start + (end - start) / 2;
        int i = left;
        for (int j = left; j <= right; ++j)
        {
            if (colors[j] <= mid)
            {
                swap(colors[i++], colors[j]);
            }
        }
        
        partition(colors, start, mid, left, i - 1);
        partition(colors, mid + 1, end, i, right);
    }
};
