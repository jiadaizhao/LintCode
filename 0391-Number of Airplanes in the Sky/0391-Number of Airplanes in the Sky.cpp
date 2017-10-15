/**
 * Definition of Interval:
 * classs Interval {
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 */
class Solution {
public:
    /**
     * @param intervals: An interval array
     * @return: Count of airplanes are in the sky.
     */
    int countOfAirplanes(vector<Interval> &airplanes) {
        // write your code here
        vector<pair<int, int>> timestamp;
        for (Interval& i : airplanes)
        {
            timestamp.emplace_back(i.start, 1);
            timestamp.emplace_back(i.end, 0);
        }
        
        sort(timestamp.begin(), timestamp.end(), cmp());
        int count = 0;
        int maxCount = 0;
        for (auto t : timestamp)
        {
            if (t.second)
            {
                ++count;
            }
            else
            {
                --count;
            }
            maxCount = max(maxCount, count);
        }
        
        return maxCount;
    }

private:
    struct cmp {
        bool operator () (pair<int, int> p1, pair<int, int> p2) {
            if (p1.first == p2.first)
            {
                return p1.second < p2.second;
            }
            else
            {
                return p1.first < p2.first;
            }
        }    
    };

};
