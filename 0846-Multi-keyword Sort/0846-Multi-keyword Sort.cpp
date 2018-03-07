class Solution {
public:
    /**
     * @param array: the input array
     * @return: the sorted array
     */
    vector<vector<int>> multiSort(vector<vector<int>> &array) {
        // Write your code here
        sort(array.begin(), array.end(), [](vector<int>& v1, vector<int>&v2) {
           if (v1[1] == v2[1]) {
               return v1[0] < v2[0];
           }
           return v1[1] > v2[1];
        });
        return array;
    }
};
