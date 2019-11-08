# 1326. Boarder Sort

Difficulty: Medium

https://www.lintcode.com/problem/boarder-sort/description

**Description**  
Given a matrix of n * n, sorting clockwise according to the hierarchy of the matrix, return the matrix ordered by layer.

1 <= grids.size() <= 500

**Example 1:**
```
Input:
grids = [[9, 9, 8, 8], [4, 3, 3, 7], [4, 2, 2, 7], [5, 5, 6, 6]]
Output: [[4, 4, 5, 5], [9, 2, 2, 6], [9, 3, 3, 6], [8, 8, 7, 7]]
Explanation: The first border is [9, 9, 8, 8, 7, 7, 6, 6, 5, 5, 4, 4], after sort is [4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9], the second border is [3, 3, 2, 2], after sotr is [2, 2, 3, 3]
```
