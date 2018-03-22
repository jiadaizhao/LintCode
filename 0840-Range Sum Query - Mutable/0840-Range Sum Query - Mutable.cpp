class NumArray {
public:
    /**
     * @return: nothing
     */
    NumArray(vector<int> nums) {
        nc = vector<int>(nums.size());
        bit = vector<int>(1 + nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            update(i, nums[i]);
        }
    }
    void update(int i, int val) {
        int diff = val - nc[i];
        if (diff == 0) return;
        nc[i] = val;
        for (int j = i + 1; j <= nc.size(); j += j & (-j)) {
            bit[j] += diff;
        }
    }
    int sumRange(int i, int j){
        return query(j + 1) - query(i);
    }
    
private:
    vector<int> nc, bit;
    int query(int index) {
        int sum = 0;
        for (int j = index; j > 0; j -= j & (-j)) {
            sum += bit[j];
        }
        return sum;
    }
};
