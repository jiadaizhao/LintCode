class Solution {
public:
    /**
     * @param buildings: A list of lists of integers
     * @return: Find the outline of those buildings
     */
    vector<vector<int> > buildingOutline(vector<vector<int> > &buildings) {
        // write your code here
        vector<vector<int>> result;
        int n = buildings.size();
        if (n == 0)
        {
            return result;
        }
        
        vector<Cell> points;
        for (auto b : buildings)
        {
            points.emplace_back(b[0], b[2], 1);
            points.emplace_back(b[1], b[2], 0);
        }
        
        sort(points.begin(), points.end());
        
        int last = 0;
        multiset<int> heights;
        for (auto& c : points)
        {
            if (heights.empty())
            {
                last = c.x;
            }
            
            if (!heights.empty() && (*heights.rbegin()) <= c.h && last < c.x)
            {
                if (result.size() && result.back()[2] == (*heights.rbegin()) && result.back()[1] == last)
                {
                    result.back()[1] = c.x;
                }
                else
                {
                    vector<int> tmp;
                    tmp.push_back(last);
                    tmp.push_back(c.x);
                    tmp.push_back(*heights.rbegin());
                    result.push_back(tmp);
                }
                last = c.x;
            }
            
            if (c.isStart == 1)
            {
                heights.insert(c.h);
            }
            else
            {
                heights.erase(heights.lower_bound(c.h));
            }
        }
        
        return result;
    }
    
private:
    struct Cell {
        int x;
        int h;
        int isStart;
        Cell (int _x, int _h, int start): x(_x), h(_h), isStart(start){}
        bool operator < (const Cell &c) const {
            return x < c.x || x == c.x && isStart < c.isStart;
        }
    };
};
