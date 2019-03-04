class Solution {
public:
    /**
     * @param arr: The K spaced array
     * @param k: The param k
     * @return: Return the sorted array
     */
    vector<int> getSortedArray(vector<int> &arr, int k) {
        // Write your code here
        int n = arr.size();
        vector<int> result(n);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for (int i = 0; i < k; ++i) {
            pq.emplace(arr[i], i);
        }
        int i = 0;
        while (!pq.empty()) {
            int num = pq.top().first;
            int index = pq.top().second;
            pq.pop();
            result[i++] = num;
            if (index + k < n) {
                pq.emplace(arr[index + k], index + k);
            }
        }
        return result;
    }
};
