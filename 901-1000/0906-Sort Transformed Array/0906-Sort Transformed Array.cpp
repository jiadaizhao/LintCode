class Solution {
public:
    /**
     * @param nums: a sorted array
     * @param a: 
     * @param b: 
     * @param c: 
     * @return: a sorted array
     */
    vector<int> sortTransformedArray(vector<int> &nums, int a, int b, int c) {
        // Write your code here
        int n = nums.size();
        if (n == 0) {
            return {};
        }
        
        vector<int> result(n);
        int left = 0, right = n - 1;
        int index = (a >= 0) ? n - 1 : 0;
        while (left <= right) {
            int l = quad(nums[left], a, b, c);
            int r = quad(nums[right], a, b, c);
            if (a >= 0) {
                if (l >= r) {
                    result[index] = l;
                    ++left;
                }
                else {
                    result[index] = r;
                    --right;
                }
                --index;
            }
            else {
                if (l >= r) {
                    result[index] = r;
                    --right;
                }
                else {
                    result[index] = l;
                    ++left;
                }
                ++index;
            }
        }
        
        return result;
    }
    
private:
    int quad(int x, int a, int b, int c) {
        return a * x * x + b * x + c;
    }
};
