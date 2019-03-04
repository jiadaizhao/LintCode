# 642. Sliding Window Average from Data Stream

Difficulty: Easy

http://www.lintcode.com/en/problem/sliding-window-average-from-data-stream/

Given a stream of integers and a window size, calculate the moving average of all integers in the sliding window.

**Example**  
```
MovingAverage m = new MovingAverage(3);
m.next(1) = 1 // return 1.00000
m.next(10) = (1 + 10) / 2 // return 5.50000
m.next(3) = (1 + 10 + 3) / 3 // return 4.66667
m.next(5) = (10 + 3 + 5) / 3 // return 6.00000
```
