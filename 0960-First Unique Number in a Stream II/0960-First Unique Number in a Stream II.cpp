class DataStream {
public:
    
    DataStream(){
        // do intialization if necessary
    }
    
    /**
     * @param num: next number in stream
     * @return: nothing
     */
    void add(int num) {
        // write your code here
        ++table[num];
        Q.push(num);
        while (!Q.empty() && table[Q.front()] > 1) {
            Q.pop();
        }
    }

    /**
     * @return: the first unique number in stream
     */
    int firstUnique() {
        // write your code here
        return Q.front();
    }
    
private:
    queue<int> Q;
    unordered_map<int, int> table;
};
