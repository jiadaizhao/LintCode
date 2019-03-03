class Solution {
public:
    /**
     * @param nums an integer unsorted array
     * @param k an integer from 1 to n
     * @return the kth largest element
     */
    int kthLargestElement2(vector<int> nums, int k) {
        // Write your code here
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int num : nums) {
            if (pq.size() < k) {
                pq.push(num);
            }
            else if (pq.top() < num) {
                pq.pop();
                pq.push(num);
            }
        }
        
        return pq.top();
    }
};
