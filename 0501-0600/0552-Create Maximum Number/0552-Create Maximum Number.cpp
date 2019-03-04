class Solution {
public:
    /*
     * @param nums1: an integer array of length m with digits 0-9
     * @param nums2: an integer array of length n with digits 0-9
     * @param k: an integer and k <= m + n
     * @return: an integer array
     */
    vector<int> maxNumber(vector<int> &nums1, vector<int> &nums2, int k) {
        // write your code here
        vector<int> result(k);
        int n1 = nums1.size();
        int n2 = nums2.size();
        for (int i = max(0, k - n2); i <= min(n1, k); ++i) {
            vector<int> num1 = reserveDigit(nums1, i);
            vector<int> num2 = reserveDigit(nums2, k - i);
            result = max(result, merge(num1, num2));
        }
        return result;
    }
    
private:
    vector<int> reserveDigit(vector<int> &nums, int k) {
        vector<int> result;
        int count = nums.size() - k;
        for (int num : nums) {
            while (result.size() && result.back() < num && count > 0) {
                result.pop_back();
                --count;
            }
            result.push_back(num);
        }
        result.resize(k);
        return result;
    }
    
    vector<int> merge(vector<int> &num1, vector<int> &num2) {
        vector<int> result(num1.size() + num2.size());
        int i = 0, j = 0;
        for (int k = 0; k < result.size(); ++k) {
            if (j == num2.size() || isGreater(num1, i, num2, j)) {
                result[k] = num1[i++];
            } else {
                result[k] = num2[j++];
            }
        }
        return result;
    }
    
    bool isGreater(vector<int> &num1, int i, vector<int> &num2, int j) {
        while (i < num1.size() && j < num2.size() && num1[i] == num2[j]) {
            ++i;
            ++j;
        }
        return j == num2.size() || (i < num1.size() && num1[i] >= num2[j]);
    }
};
