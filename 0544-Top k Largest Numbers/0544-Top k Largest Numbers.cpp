class Solution {
public:
    /*
     * @param nums an integer array
     * @param k an integer
     * @return the top k largest numbers in array
     */
    vector<int> topk(vector<int>& nums, int k) {
        // Write your code here
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int num : nums) {
            pq.push(num);
            if (pq.size() > k) {
                pq.pop();
            }
        }
        
        vector<int> result;
        while (!pq.empty()) {
            result.push_back(pq.top());
            pq.pop();
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};
