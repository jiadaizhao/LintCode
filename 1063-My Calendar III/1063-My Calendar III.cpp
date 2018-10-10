#include<map>
#include<algorithm>
using namespace std;
class MyCalendarThree {
public:
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        ++table[start];
        --table[end];
        int count = 0, maxCount = 0;
        for (auto t : table) {
            count += t.second;
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
    
private:
    map<int, int> table;
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree obj = new MyCalendarThree();
 * int param_1 = obj.book(start,end);
 */