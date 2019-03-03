class Solution {
public:
    /*
     * @param envelopes: a number of envelopes with widths and heights
     * @return: the maximum number of envelopes
     */
    int maxEnvelopes(vector<pair<int, int>>& envelopes) {
        // write your code here
        sort(envelopes.begin(), envelopes.end(), cmp());
        vector<int> rde;
        for (auto &e : envelopes) {
            int h = e.second;
            if (rde.empty() || h > rde.back()) {
                rde.push_back(e.second);
            }
            else {
                auto it = lower_bound(rde.begin(), rde.end(), h);
                *it = h;
            }
        }
        
        return rde.size();
    }
    
private:
    struct cmp {
        bool operator ()(pair<int, int> &p1, pair<int, int> &p2) {
            if (p1.first == p2.first) {
                return p1.second > p2.second;
            }
            return p1.first < p2.first;
        }
    };
};
