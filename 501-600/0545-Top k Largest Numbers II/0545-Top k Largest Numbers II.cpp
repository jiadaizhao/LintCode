class Solution {
public:
    Solution(int k) {
        // initialize your data structure here.
        maxSize = k;
    }

    void add(int num) {
        // Write your code here
        if (pq.size() < maxSize) {
            pq.push(num);
        } else if (pq.top() < num) {
            pq.pop();
            pq.push(num);
        }
    }

    vector<int> topk() {
        // Write your code here
        vector<int> result;
        while (!pq.empty()) {
            result.push_back(pq.top());
            pq.pop();
        }
        
        for (int val : result) {
            pq.push(val);
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
private:
    int maxSize;
    priority_queue<int, vector<int>, greater<int>> pq;
};
