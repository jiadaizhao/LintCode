# 390. Find Peak Element II

Difficulty: Hard

http://www.lintcode.com/en/problem/find-peak-element-ii/

There is an integer matrix which has the following features:

* The numbers in adjacent positions are different.
* The matrix has n rows and m columns.
* For all i < m, A[0][i] < A[1][i] && A[n - 2][i] > A[n - 1][i].
* For all j < n, A[j][0] < A[j][1] && A[j][m - 2] > A[j][m - 1].
We define a position P is a peek if:
```
A[j][i] > A[j+1][i] && A[j][i] > A[j-1][i] && A[j][i] > A[j][i+1] && A[j][i] > A[j][i-1]
```
Find a peak element in this matrix. Return the index of the peak.

**Notice**  

The matrix may contains multiple peeks, find any of them.

**Example**  
Given a matrix:
```
[
  [1 ,2 ,3 ,6 ,5],
  [16,41,23,22,6],
  [15,17,24,21,7],
  [14,18,19,20,10],
  [13,14,11,10,9]
]
```
return index of 41 (which is [1,1]) or index of 24 (which is [2,2])
