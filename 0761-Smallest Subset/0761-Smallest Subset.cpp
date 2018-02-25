class Solution {
public:
    /**
     * @param arr:  an array of non-negative integers
     * @return: minimum number of elements
     */
    int minElements(vector<int> &arr) {
        // write your code here
        int total = 0;
        for (int i : arr) {
            total += i;
        }
        
        sort(arr.begin(), arr.end(), greater<int>());
        int count = 0, sum = 0;
        while (sum <= total - sum) {
            sum += arr[count++];
        }
        return count;
    }
};
