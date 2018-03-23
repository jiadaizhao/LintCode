class Solution {
public:
    /**
     * @param arr: The prime array
     * @return: Return the array of all of prime product
     */
    vector<int> getPrimeProduct(vector<int> &arr) {
        // Write your code here
        int n = arr.size();
        vector<int> result;
        int upper = 1 << n;
        for (int i = 3; i <= upper; ++i) {
            if ((i & (i - 1)) == 0) {
                continue;
            }
            int product = 1;
            for (int j = 0; j < n; ++j) {
                if (i & (1 << j)) {
                    product *= arr[j];
                }
            }
            result.push_back(product);
        }
        sort(result.begin(), result.end());
        return result;
    }
};
