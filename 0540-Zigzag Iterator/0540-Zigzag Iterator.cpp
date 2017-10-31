class ZigzagIterator {
public:
    /**
     * @param v1 v2 two 1d vectors
     */
    ZigzagIterator(vector<int>& v1, vector<int>& v2) {
        // initialize your data structure here.
        itbegin[0] = v1.begin();
        itend[0] = v1.end();
        itbegin[1] = v2.begin();
        itend[1] = v2.end();
        vec1 = true;
    }

    int next() {
        // Write your code here
        if (itbegin[0] == itend[0]) {
            return *(itbegin[1]++);
        } else if (itbegin[1] == itend[1]) {
            return *(itbegin[0]++);
        } else if (vec1) {
            vec1 = false;
            return *(itbegin[0]++);
        } else {
            vec1 = true;
            return *(itbegin[1]++);
        }
    }

    bool hasNext() {
        // Write your code here
        return itbegin[0] != itend[0] || itbegin[1] != itend[1];
    }
private:
    vector<int>::iterator itbegin[2], itend[2];
    bool vec1;
};

/**
 * Your ZigzagIterator object will be instantiated and called as such:
 * ZigzagIterator solution(v1, v2);
 * while (solution.hasNext()) result.push_back(solution.next());
 * Ouptut result
 */
