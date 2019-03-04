class Solution {
public:
    /**
    * @param nums a list of integer
    * @return void
    */
    void wiggleSort(vector<int>& nums) {
        // Write your code here
        int n = nums.size();
        if (n == 0)
        {
            return;
        }
        auto midptr = nums.begin() + n / 2;
        nth_element(nums.begin(), midptr, nums.end());
        int mid = *midptr;

        int i = 0, j = 0, k = n - 1;
        while (j <= k)
        {
            int index = Index(j, n);
            if (nums[index] > mid)
            {
                swap(nums[Index(i++, n)], nums[index]);
                ++j;
            }
            else if (nums[index] < mid)
            {
                swap(nums[Index(k--, n)], nums[index]);
            }
            else
            {
                ++j;
            }
        }
    }

private:
    int Index(int i, int n)
    {
        return (i * 2 + 1) % (n | 1);
    }
};
