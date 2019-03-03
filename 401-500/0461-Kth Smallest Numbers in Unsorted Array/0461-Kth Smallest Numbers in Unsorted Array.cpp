class Solution {
public:
    /*
     * @param k an integer
     * @param nums an integer array
     * @return kth smallest element
     */
    int kthSmallest(int k, vector<int> nums) {
        // write your code here
        return helper(nums, 0, nums.size() - 1, k);
    }
private:
    int helper(vector<int>& nums, int start, int end, int k)
    {
        int p = partition(nums, start, end);
        if (p == k - 1)
        {
            return nums[p];
        }
        else if (p < k - 1)
        {
            return helper(nums, p + 1, end, k);
        }
        else
        {
            return helper(nums, start, p - 1, k);
        }
    }

    int partition(vector<int>&nums, int start, int end)
    {
        int pivot = nums[end];
        int i = start;
        for (int j = start; j < end; ++j)
        {
            if (nums[j] <= pivot)
            {
                swap(nums[i++], nums[j]);
            }
        }
        
        swap(nums[i], nums[end]);
        return i;
    }
};
