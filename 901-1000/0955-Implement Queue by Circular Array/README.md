# 955. Implement Queue by Circular Array

Difficulty: Medium

http://www.lintcode.com/en/problem/implement-queue-by-circular-array/

Implement queue by circulant array. You need to support the following methods:  
1. CircularQueue(n): initialize a circular array with size n to store elements
2. boolean isFull(): return true if the array is full
3. boolean isEmpty(): return true if there is no element in the array 
4. void enqueue(element): add an element to the queue
5. int dequeue(): pop an element from the queue

**Notice**  
it's guaranteed in the test cases we won't call enqueue if it's full and we also won't call dequeue if it's empty. So it's ok to raise exception in scenarios described above.

**Example**  
```
CircularQueue(5)
isFull()   => false
isEmpty() => true
enqueue(1)
dequeue()  => 1
```
