class RandomizedCollection {
public:
    /** Initialize your data structure here. */
    RandomizedCollection() {
        
    }
    
    /** Inserts a value to the collection. Returns true if the collection did not already contain the specified element. */
    bool insert(int val) {
        // write your code here
        bool result = (indexTable.find(val) == indexTable.end());        
        indexTable[val].push_back(nums.size());
        nums.emplace_back(val, indexTable[val].size() - 1);
        return result;
    }
    
    /** Removes a value from the collection. Returns true if the collection contained the specified element. */
    bool remove(int val) {
        // write your code here
        if (indexTable.find(val) == indexTable.end()) {
            return false;
        }
        
        int index = indexTable[val].back();
        auto last = nums.back();
        indexTable[last.first][last.second] = index;
        nums[index] = last;
        nums.pop_back();
        indexTable[val].pop_back();
        if (indexTable[val].size() == 0) {
            indexTable.erase(val);
        }        
        return true;
    }
    
    /** Get a random element from the collection. */
    int getRandom() {
        // write your code here
        return nums[rand() % nums.size()].first;
    }
    
private:
    // first is val, second is index in indexTable[val].
    vector<pair<int, int>> nums;
    // first is val, second is vector of indices in nums.
    unordered_map<int, vector<int>> indexTable;
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection obj = new RandomizedCollection();
 * bool param_1 = obj.insert(val);
 * bool param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */
 