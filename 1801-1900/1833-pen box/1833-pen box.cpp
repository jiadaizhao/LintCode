class Solution {
public:
    /**
     * @param boxes: number of pens for each box
     * @param target: the target number
     * @return: the minimum boxes
     */
    int minimumBoxes(vector<int> &boxes, int target) {
        // write your code here
        int n = boxes.size();
        vector<int> left(n, -1);
        unordered_map<int, int> table{{0, -1}};
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += boxes[i];
            if (i > 0) {
                left[i] = left[i - 1];
            }
            if (table.count(sum - target)) {
                int curr = i - table[sum - target];
                if (left[i] == -1 || curr < left[i]) {
                    left[i] = curr;
                }
            }
            table[sum] = i;
        }
        
        table.clear();
        table[0] = n;
        int minLen = -1, right = -1;
        sum = 0;
        for (int i = n - 1; i >= 0; --i) {
            if (left[i] != -1 && right != -1 && (minLen == -1 || left[i] + right < minLen)) {
                minLen = left[i] + right;
            }
            sum += boxes[i];
            if (table.count(sum - target)) {
                int curr = table[sum - target] - i;
                if (right == -1 || curr < right) {
                    right = curr;
                }
            }
            table[sum] = i;
        }
        
        return minLen;
    }
};
