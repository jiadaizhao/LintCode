class RandomizedSet {
public:
    RandomizedSet() {
        // do intialization if necessary
    }

    /*
     * @param val: a value to the set
     * @return: true if the set did not already contain the specified element or false
     */
    bool insert(int val) {
        // write your code here
        if (table.find(val) == table.end()) {
            vals.push_back(val);
            table[val] = vals.size() - 1;
            return true;
        }
        else {
            return false;
        }
    }

    /*
     * @param val: a value from the set
     * @return: true if the set contained the specified element or false
     */
    bool remove(int val) {
        // write your code here
        if (table.find(val) != table.end()) {
            int index = table[val];
            int last = vals.back();
            vals.pop_back();
            table.erase(val);
            if (index != vals.size()) {
                vals[index] = last;
                table[last] = index;
            }
            return true;
        }
        else {
            return false;
        }
    }

    /*
     * @return: Get a random element from the set
     */
    int getRandom() {
        // write your code here
        return vals[rand() % vals.size()];
    }
    
private:
    vector<int> vals;
    unordered_map<int, int> table;
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * bool param = obj.insert(val);
 * bool param = obj.remove(val);
 * int param = obj.getRandom();
 */
