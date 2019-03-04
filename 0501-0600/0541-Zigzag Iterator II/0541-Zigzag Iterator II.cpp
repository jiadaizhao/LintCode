class ZigzagIterator2 {
public:
    /**
     * @param vecs a list of 1d vectors
     */
    ZigzagIterator2(vector<vector<int>>& vecs) {
        // initialize your data structure here.
        k = 0;
        for (auto& vec : vecs)
        {
            if (vec.size())
            {
                ++k;
                itbegin.push_back(vec.begin());
                itend.push_back(vec.end());
            }
        }
        index = 0;
    }

    int next() {
        // Write your code here
        int elem = *itbegin[index]++;
        if (itbegin[index] == itend[index])
        {
            itbegin.erase(itbegin.begin() + index);
            itend.erase(itend.begin() + index);
            if (--k > 0)
            {
                index %= k;
            }
        }
        else
        {
            index = (index + 1) % k;
        }
        
        return elem;
    }

    bool hasNext() {
        // Write your code here
        return k > 0;
    }
private:
    vector<vector<int>::iterator> itbegin;
    vector<vector<int>::iterator> itend;
    int k, index;
};

/**
 * Your ZigzagIterator2 object will be instantiated and called as such:
 * ZigzagIterator2 solution(vecs);
 * while (solution.hasNext()) result.push_back(solution.next());
 * Ouptut result
 */
