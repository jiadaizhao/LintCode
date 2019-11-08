class SummaryRanges {
public:
    SummaryRanges() {
         
    }

    
    void addNum(int val) {
        auto l = table.lower_bound(val);
        if (l != table.begin()) {
            --l;
            if (l->second < val - 1) {
                ++l;
            }
        }
        
        auto r = table.upper_bound(val + 1);
        int left = val, right = val;
        if (l != r) {
            left = min(left, l->first);
            right = max(right, (--r)->second);
            table.erase(l, ++r);
        }
        
        table[left] = right;
    }

    
    vector<vector<int>> getIntervals() {
        vector<vector<int>> result;
        for (auto t : table) {
            result.push_back({t.first, t.second});
        }
        return result;
    }
    
private:
    map<int, int> table;
};
