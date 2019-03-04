class Solution {
public:
    /**
     * @param nums: a vector of integers
     * @return: the maximum difference
     */
    int maximumGap(vector<int> nums) {
        // write your code here
        int n = nums.size();
        if (n < 2)
        {
            return 0;
        }
        
        int maxNum = *max_element(nums.begin(), nums.end());
        int minNum = *min_element(nums.begin(), nums.end());
        int bcap = max(1, (maxNum - minNum) / (n - 1));
        int bsize = (maxNum - minNum) / bcap + 1;
        vector<Bucket> buckets(bsize);
        for (int num : nums)
        {
            int index = (num - minNum) / bcap;
            buckets[index].used = true;
            buckets[index].minNum = min(buckets[index].minNum, num);
            buckets[index].maxNum = max(buckets[index].maxNum, num);
        }
        
        int preMax = minNum, maxGap = 0;
        for (Bucket b : buckets)
        {
            if (b.used)
            {
                maxGap = max(maxGap, b.minNum - preMax);
                preMax = b.maxNum;
            }
        }
        
        return maxGap;
    }

private:
    class Bucket {
    public:
        bool used = false;
        int minNum = INT_MAX;
        int maxNum = INT_MIN;
    };
};
