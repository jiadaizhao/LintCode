class CircularQueue {
public:
    /**
     * @return:  return true if the array is full
     */
    CircularQueue(int n) {
        // do intialization if necessary
        arr = vector<int>(n);
        size = head = tail = 0;
        capacity = n;
    }
    bool isFull() {
        // write your code here
        return size == capacity;
    }

    /**
     * @return: return true if there is no element in the array
     */
    bool isEmpty() {
        // write your code here
        return size == 0;
    }

    /**
     * @param element: the element given to be added
     * @return: nothing
     */
    void enqueue(int element) {
        // write your code here
        arr[(tail++) % capacity] = element;
        ++size;
    }

    /**
     * @return: pop an element from the queue
     */
    int dequeue() {
        // write your code here
        --size;
        return arr[(head++) % capacity];
    }
    
private:
    vector<int> arr;
    int size, head, tail, capacity;
};
