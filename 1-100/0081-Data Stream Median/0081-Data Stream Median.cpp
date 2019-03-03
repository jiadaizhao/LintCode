class Solution {
public:
    /**
     * @param nums: A list of integers.
     * @return: The median of numbers
     */
    vector<int> medianII(vector<int> &nums) {
        // write your code here
        vector<int> result;
        priority_queue<int> pq1;
        priority_queue<int, vector<int>, greater<int>> pq2;
        
        for (int num : nums)
        {
            pq1.push(num);
            pq2.push(pq1.top());
            pq1.pop();
            if (pq1.size() < pq2.size())
            {
                pq1.push(pq2.top());
                pq2.pop();
            }
            
            result.push_back(pq1.top());
        }
        
        return result;
    }
};
