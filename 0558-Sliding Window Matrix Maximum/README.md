# 558. Sliding Window Matrix Maximum

Difficulty: Hard

http://www.lintcode.com/en/problem/sliding-window-matrix-maximum/

Given an array of n * m matrix, and a moving matrix window (size k * k), move the window from top left to botton right at each iteration, find the maximum sum inside the window at each moving.  
Return 0 if the answer does not exist.

**Example**  
For matrix
```
[
  [1, 5, 3],
  [3, 2, 1],
  [4, 1, 9],
]
```
The moving window size k = 2. 
return 13.

At first the window is at the start of the array like this
```
[
  [|1, 5|, 3],
  [|3, 2|, 1],
  [4, 1, 9],
]
```
,get the sum 11;
then the window move one step forward.
```
[
  [1, |5, 3|],
  [3, |2, 1|],
  [4, 1, 9],
]
```
,get the sum 11;
then the window move one step forward again.
```
[
  [1, 5, 3],
  [|3, 2|, 1],
  [|4, 1|, 9],
]
```
,get the sum 10;
then the window move one step forward again.
```
[
  [1, 5, 3],
  [3, |2, 1|],
  [4, |1, 9|],
]
```
,get the sum 13;
SO finally, get the maximum from all the sum which is 13.
