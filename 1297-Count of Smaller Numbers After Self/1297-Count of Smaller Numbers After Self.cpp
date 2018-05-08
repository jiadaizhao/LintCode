class Solution {
public:
    /**
     * @param nums: a list of integers
     * @return: return a list of integers
     */
    vector<int> countSmaller(vector<int> &nums) {
        // write your code here
        int n = nums.size();
        if (n == 0) {
            return {};
        }
        
        vector<int> result(n);
        vector<int> index(n);
        for (int i = 0; i < n; ++i) {
            index[i] = i;
        }
        vector<int> temp(n);
        mergeSort(index, 0, n - 1, nums, temp, result);
        return result;
    }
    
private:
    void mergeSort(vector<int>& index, int start, int end, vector<int>& nums, vector<int>& temp, vector<int>& result) {
        if (start < end) {
            int mid = start + (end - start) / 2;
            mergeSort(index, start, mid, nums, temp, result);
            mergeSort(index, mid + 1, end, nums, temp, result);
            merge(index, start, mid, end, nums, temp, result);
        }
    }
    
    void merge(vector<int>& index, int start, int mid, int end, vector<int>& nums, vector<int>& temp, vector<int>& result) {
        int i = start, j = mid + 1;
        int k = start;
        int count = 0;
        while (i <= mid) {
            while (j <= end && nums[index[j]] < nums[index[i]]) {
                ++count;
                temp[k++] = index[j++];
            }
            result[index[i]] += count;
            temp[k++] = index[i++];
        }
        
        while (j <= end) {
            temp[k++] = index[j++];
        }
        
        for (int i = start; i <= end; ++i) {
            index[i] = temp[i];
        }
    }
};
