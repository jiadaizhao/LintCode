class MinStack {
public:
    MinStack() {
        // do initialization if necessary
    }

    void push(int number) {
        // write your code here
        if (St.size() == 0)
        {
            St.push(0);
            minVal = number;
        }
        else
        {
            St.push((long)number - minVal);
            minVal = std::min(minVal, number);
        }
    }

    int pop() {
        // write your code here
        long top = St.top();
        St.pop();
        if (top < 0)
        {
            minVal -= (long)top; 
        }
        
        return top + minVal;
    }

    int min() {
        // write your code here
        return minVal;
    }

private:
    stack<long> St;
    int minVal;
};
