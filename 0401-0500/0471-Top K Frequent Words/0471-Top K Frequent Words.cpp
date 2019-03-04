class Solution {
public:
    /**
     * @param words an array of string
     * @param k an integer
     * @return an array of string
     */
    vector<string> topKFrequentWords(vector<string>& words, int k) {
        // Write your code here
        vector<string> result;
        if (k <= 0 || words.size() == 0)
        {
            return result;
        }
        
        unordered_map<string, int> table;
        for (string w : words)
        {
            ++table[w];
        }
        
        priority_queue<pair<string, int>, vector<pair<string, int>>, cmp> pq;
        for (auto it = table.begin(); it != table.end(); ++it)
        {
            if (pq.size() < k)
            {
                pq.push(*it);
            }
            else if ((pq.top().second < it->second) || (pq.top().second == it->second && pq.top().first > it->first))
            {
                pq.pop();
                pq.push(*it);
            }
        }
        
        while (!pq.empty())
        {
            result.push_back(pq.top().first);
            pq.pop();
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
private:
    struct cmp
    {
        bool operator() (pair<string, int>& p1, pair<string, int>& p2)
        {
            if (p1.second == p2.second)
            {
                return p1.first < p2.first;
            }
            else
            {
                return p1.second > p2.second;
            }
        } 
    };
};
