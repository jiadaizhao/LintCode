#include<map>
#include<algorithm>
using namespace std;

class Solution {
public:
    Solution() {
        //do some initialization if necessary
    }
    
    void addRange(int left, int right) {
        //write your code here
        auto l = table.lower_bound(left);
        if (l != table.begin()) {
            --l;
            if (l->second < left) {
                ++l;
            }
        }
        auto r = table.upper_bound(right);
        if (l != r) {
            left = min(left, l->first);
            right = max(right, (--r)->second);
            table.erase(l, ++r);
        }
        table[left] = right;
    }
    
    bool queryRange(int left, int right) {
        //write your code here
        auto l = table.upper_bound(left);
        return l != table.begin() && (--l)->second >= right;
    }
    
    void removeRange(int left, int right) {
        //write your code here
        auto l = table.lower_bound(left);
        if (l != table.begin()) {
            --l;
            if (l->second < left) {
                ++l;
            }
        }
        auto r = table.upper_bound(right);
        if (l != r) {
            int ll = min(left, l->first);
            int rr = max(right, (--r)->second);
            table.erase(l, ++r);
            if (ll < left) {
                table[ll] = left;
            }
            if (rr > right) {
                table[right] = rr;
            }
        }
    }
    
private:
    map<int, int> table;
};
