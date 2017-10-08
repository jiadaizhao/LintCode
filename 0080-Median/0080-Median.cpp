class Solution {
public:
    /**
     * @param nums: A list of integers.
     * @return: An integer denotes the middle number of the array.
     */
    int median(vector<int> &nums) {
        // write your code here
        int n = nums.size();
        return findMedian(nums, 0, n - 1);
    }
    
private:
    int findMedian(vector<int> &nums, int start, int end)
    {
        int n = nums.size();
        int k = partition(nums, start, end);
        if (k < (n - 1) / 2)
        {
            return findMedian(nums, k + 1, end);
        }
        else if (k > (n - 1) / 2)
        {
            return findMedian(nums, start, k - 1);
        }
        else
        {
            return nums[k];
        }
    }
    int partition(vector<int> &nums, int start, int end)
    {
        int index = start + rand() % (end - start + 1);
        swap(nums[index], nums[end]);
        int j = start;
        for (int i = start; i < end; ++i)
        {
            if (nums[i] <= nums[end])
            {
                swap(nums[i], nums[j++]);
            }
        }
        
        swap(nums[j], nums[end]);
        return j;
    }
};
