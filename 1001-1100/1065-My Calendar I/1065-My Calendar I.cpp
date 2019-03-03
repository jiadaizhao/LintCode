#include<map>
using namespace std;
class MyCalendar {
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        auto it = table.lower_bound(start);
        if (it != table.begin()) {
            auto prev = it;
            --prev;
            if (prev->second > start) {
                return false;
            }
        }
        
        if (it != table.end() && it->first < end) {
            return false;
        }
        table[start] = end;
        return true;
    }

private:
    map<int, int> table;
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar obj = new MyCalendar();
 * bool param_1 = obj.book(start,end);
 */