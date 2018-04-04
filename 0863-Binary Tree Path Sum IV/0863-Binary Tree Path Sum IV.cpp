class Solution {
public:
    /**
     * @param nums: a list of integers
     * @return: return an integer
     */
    int pathSum(vector<int> &nums) {
        // write your code here
        if (nums.size() == 0) return 0;
        for (int num : nums) {
            table[num / 10] = num % 10;
        }
        int sum = 0;
        traverse(nums[0] / 10, 0, sum);
        return sum;
    }
private:
    unordered_map<int, int> table;
    void traverse(int root, int preSum, int& sum) {
        int currSum = preSum + table[root];
        int level = root / 10;
        int index = root % 10;
        int left = (level + 1) * 10 + index * 2 - 1;
        int right = (level + 1) * 10 + index * 2;
        if (!table.count(left) && !table.count(right)) {
            sum += currSum;
            return;
        }
        
        if (table.count(left)) {
            traverse(left, currSum, sum);
        }
        
        if (table.count(right)) {
            traverse(right, currSum, sum);
        }
    }
};
