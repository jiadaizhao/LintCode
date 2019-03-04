class Stack {
public:
    // Push a new item into the stack
    void push(int x) {
        // Write your code here
        Q1.push(x);
    }

    // Pop the top of the stack
    void pop() {
        // Write your code here
        top();
        Q1.pop();
        swap(Q1, Q2);
    }

    // Return the top of the stack
    int top() {
        // Write your code here
        while (Q1.size() > 1)
        {
            Q2.push(Q1.front());
            Q1.pop();
        }
        
        return Q1.front();
    }

    // Check the stack is empty or not.
    bool isEmpty() {
        // Write your code here
        return Q1.empty() && Q2.empty();
    }
private:
    queue<int> Q1, Q2;
};
