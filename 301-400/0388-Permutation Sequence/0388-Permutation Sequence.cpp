class Solution {
public:
    /*
     * @param n: n
     * @param k: the k th permutation
     * @return: return the k-th permutation
     */
    string getPermutation(int n, int k) {
        // write your code here
        vector<int> nums(n);
        for (int i = 0; i < n; ++i) {
            nums[i] = i + 1;
        }
        --k;
        int fac = 1;
        for (int i = 1; i < n; ++i) {
            fac *= i;
        }
        
        string result;
        while (nums.size()) {
            int index = k / fac;
            result += to_string(nums[index]);
            k %= fac;
            nums.erase(nums.begin() + index);
            if (nums.size()) {
                fac /= nums.size();
            }
        }
        
        return result;
    }
};
