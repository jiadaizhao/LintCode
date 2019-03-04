class Solution {
public:
    /**
     * @param n: the number of integers
     * @param k: the number of distinct integers
     * @return: any of answers meet the requirment
     */
    vector<int> constructArray(int n, int k) {
        // Write your code here
        vector<int> result(n);
        int i = 0;
        while (i < n - k) {
            result[i] = n - i;
            ++i;
        }
        
        int start = 1, end = k;
        bool flag = true;
        while (i < n) {
            result[i++] = flag ? start++ : end--;
            flag = !flag;
        }
        
        return result;
    }
};
