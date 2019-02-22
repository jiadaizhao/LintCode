#include <list>
#include <string>
class AllOne {
public:
    /** Initialize your data structure here. */
    AllOne() {
        
    }
    
    /** Inserts a new key <Key> with value 1. Or increments an existing key by 1. */
    void inc(string key) {
        list<Row>::iterator nrow;
        if (cache.find(key) != cache.end()) {
            auto row = cache[key].first;
            auto col = cache[key].second;
            auto nextRow = row;
            ++nextRow;
            if (nextRow == matrix.end() || nextRow->val != row->val + 1) {
                nrow = matrix.emplace(nextRow, key, row->val + 1);
            }
            else {
                nrow = nextRow;
                nrow->cols.push_front(key);
            }
            row->cols.erase(col);
            if (row->cols.size() == 0) {
                matrix.erase(row);
            }            
        }
        else {
            if (matrix.size() == 0 || matrix.begin()->val != 1) {
                nrow = matrix.emplace(matrix.begin(), key, 1);
            }
            else {
                nrow = matrix.begin();
                nrow->cols.push_front(key);
            }
        }
        cache[key] = {nrow, nrow->cols.begin()};
    }
    
    /** Decrements an existing key by 1. If Key's value is 1, remove it from the data structure. */
    void dec(string key) {
        if (cache.find(key) == cache.end()) {
            return;
        }
        
        list<Row>::iterator nrow;
        auto row = cache[key].first;
        auto col = cache[key].second;
        if (row->val == 1) {
            cache.erase(key);
        }
        else {
            auto prevRow = row;
            --prevRow;
            if (prevRow == matrix.end() || prevRow->val != row->val - 1) {
                nrow = matrix.emplace(row, key, row->val - 1);
            }
            else {
                nrow = prevRow;
                nrow->cols.push_front(key);
            }
            
            cache[key] = {nrow, nrow->cols.begin()};        
        }
        row->cols.erase(col);
        if (row->cols.size() == 0) {
            matrix.erase(row);
        }
    }
    
    /** Returns one of the keys with maximal value. */
    string getMaxKey() {
        return matrix.size() ? matrix.back().cols.front() : "";
    }
    
    /** Returns one of the keys with Minimal value. */
    string getMinKey() {
        return matrix.size() ? matrix.front().cols.front() : "";
    }
    
private:
    struct Row {
        list<string> cols;
        int val;
        Row(string s, int v): cols({s}), val(v) {}
    };
    list<Row> matrix;
    unordered_map<string, pair<list<Row>::iterator, list<string>::iterator>> cache;
};

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne obj = new AllOne();
 * obj.inc(key);
 * obj.dec(key);
 * string param_3 = obj.getMaxKey();
 * string param_4 = obj.getMinKey();
 */