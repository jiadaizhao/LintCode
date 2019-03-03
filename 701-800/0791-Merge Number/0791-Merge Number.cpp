class Solution {
public:
    /**
     * @param numbers: the numbers
     * @return: the minimum cost
     */
    int mergeNumber(vector<int> &numbers) {
        // Write your code here
        int sum = 0;
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int num : numbers) {
            pq.push(num);
        }
        
        while (pq.size() > 1) {
            int num1 = pq.top();
            pq.pop();
            int num2 = pq.top();
            pq.pop();
            sum += num1 + num2;
            pq.push(num1 + num2);
        }
        return sum;
    }
};
