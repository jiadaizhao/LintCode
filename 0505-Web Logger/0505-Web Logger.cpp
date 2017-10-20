class WebLogger {
public:
    WebLogger() {
        // initialize your data structure here.
    }

    /**
     * @param timestamp an integer
     * @return void
     */
    void hit(int timestamp) {
        // Write your code here
        while (!Q.empty() && Q.front() + 300 <= timestamp) {
            Q.pop();
        }
        Q.push(timestamp);
    }

    /**
     * @param timestamp an integer
     * @return an integer
     */
    int get_hit_count_in_last_5_minutes(int timestamp) {
        // Write your code here
        while (!Q.empty() && Q.front() + 300 <= timestamp) {
            Q.pop();
        }
        
        return Q.size();
    }
    
private:
    queue<int> Q;
};
