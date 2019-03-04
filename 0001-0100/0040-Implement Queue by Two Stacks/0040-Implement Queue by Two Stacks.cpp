class MyQueue {
public:
    stack<int> stack1;
    stack<int> stack2;

    MyQueue() {
        // do intialization if necessary
    }

    void push(int element) {
        // write your code here
        stack1.push(element);
    }
    
    int pop() {
        // write your code here
        int result = top();
        stack2.pop();
        return result;
    }

    int top() {
        // write your code here
        if (stack2.size() == 0)
        {
            while (!stack1.empty())
            {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        
        return stack2.top();
    }
};
