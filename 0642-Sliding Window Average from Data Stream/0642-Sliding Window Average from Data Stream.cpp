class MovingAverage {
public:
    /*
    * @param size: An integer
    */MovingAverage(int size) {
        // do intialization if necessary
        this->size = size;
        sum = 0;
    }

    /*
     * @param val: An integer
     * @return:  
     */
    double next(int val) {
        // write your code here
        Q.push(val);
        sum += val;
        if (Q.size() > size) {
            sum -= Q.front();
            Q.pop();
        }
        return sum / Q.size();
    }
    
private:
    queue<int> Q;
    int size;
    double sum;
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage obj = new MovingAverage(size);
 * double param = obj.next(val);
 */
