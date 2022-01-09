class Solution {
public:
    /**
     * @param nums: an array of integers
     * @param threshold: an integer
     * @return: return the smallest divisor
     */
    int smallestDivisor(vector<int> &nums, int threshold) {
        // write your code here
        int low = 1, high = 0;
        for (int num : nums) {
            high = max(high, num);
        }
        while (low < high) {
            int mid = (low + high) / 2;
            int sum = 0;
            for (int num : nums) {
                sum += (num + mid - 1) / mid;
            }
            if (sum <= threshold) {
                high = mid;
            }
            else {
                low = mid + 1;
            }
        }
        
        return low;
    }
};
