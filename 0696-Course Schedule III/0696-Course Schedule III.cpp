class Solution {
public:
    /*
     * @param : duration and close day of each course
     * @return: the maximal number of courses that can be taken
     */
    int scheduleCourse(vector<vector<int>> &courses) {
        // write your code here
        sort(courses.begin(), courses.end(), cmp());
        int time = 0;
        priority_queue<int> pq;
        for (auto& c : courses) {
            if (time + c[0] <= c[1]) {
                pq.push(c[0]);
                time += c[0];
            }
            else if (!pq.empty() && pq.top() > c[0]) {
                time -= pq.top() - c[0];
                pq.pop();
                pq.push(c[0]);
            }
        }
        return pq.size();
    }
    
private:
    struct cmp {
        bool operator() (const vector<int>& c1, const vector<int>& c2) const {
            if (c1[1] == c2[1]) {
                return c1[0] < c2[0];
            }
            return c1[1] < c2[1];
        }    
    };
};
