class TwoSum {
public:

    // Add the number to an internal data structure.
    void add(int number) {
        // Write your code here
        ++table[number];
    }

    // Find if there exists any pair of numbers which sum is equal to the value.
    bool find(int value) {
        // Write your code here
        for (auto it = table.begin(); it != table.end(); ++it) {
            int a = it->first;
            int b = value - a;
            if ((a != b && table.count(b)) || (a == b && it->second > 1)) {
                return true;
            }
        }
        
        return false;
    }
private:
    unordered_map<int, int> table;
};


// Your TwoSum object will be instantiated and called as such:
// TwoSum twoSum;
// twoSum.add(number);
// twoSum.find(value);
