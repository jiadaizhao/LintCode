class Solution {
public:
    /*
     * @param : the original array
     * @param : the direction each time
     * @return: the final folded array 
     */
    vector<int> folding(vector<int> &nums, vector<int> &req) {
        // write your code here
        int n = nums.size();
        vector<int> result(n);
        int l = n / 2;
        for (int i = 0; i < req.size(); ++i) {
            if (req[i] == 0) {
                int k = 0;
                for (int j = n / 2 - 1; j >= 0; --j) {
                    result[j] = nums[k++];
                    if (k % l == 0) {
                        k += l;
                    }
                }
                k = l;
                for (int j = n / 2; j < n; ++j) {
                    result[j] = nums[k++];
                    if (k % l == 0) {
                        k += l;
                    }
                }
            }
            else {
                int k = n - 1;
                for (int j = 0; j < n / 2; ++j) {
                    result[j] = nums[k--];
                    if ((k + 1) % l == 0) {
                        k -= l;
                    }
                }
                k = 0;
                for (int j = n / 2; j < n; ++j) {
                    result[j] = nums[k++];
                    if (k % l == 0) {
                        k += l;
                    }
                }
            }
            l /= 2;
            nums = result;
            /*
            for (int i = 0; i < n; ++i) {
                cout << result[i] << " ";
            }
            cout << endl;*/
        }
        return result;
    }
};
