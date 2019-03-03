# 1272. Kth Smallest Element in a Sorted Matrix

Difficulty: Medium

https://www.lintcode.com/problem/kth-smallest-element-in-a-sorted-matrix/description

**Description**  
Given a n x n matrix where each of the rows and columns are sorted in ascending order, find the kth smallest element in the matrix.

Note that it is the kth smallest element in the sorted order, not the kth distinct element.

You may assume k is always valid, 1 ≤ k ≤ n^2.

**Example**  
```
matrix = [
[ 1, 5, 9],
[10, 11, 13],
[12, 13, 15]
],
k = 8,

return 13.
```

**Challenge**  
If k << n^2, what's the best algorithm?  
How about k ~ n^2?
