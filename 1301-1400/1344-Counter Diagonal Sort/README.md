# 1344. Counter Diagonal Sort

Difficulty: Medium

https://www.lintcode.com/problem/counter-diagonal-sort/description

**Description**  
Given a matrix of n * m, you can loop through the counter-diagonal direction to get (n + m) - 1 lists, return sorted lists

* Only 26 lowercase letters are included in the matrix
* Traversal mode: traverse from the left or bottom boundary of the matrix to the upper right direction
* Sort: A=["a", "b", "d"] B=["a", "b", "b"] C=["c", "c", "c"], B < A < C, you need to return [B, A, C]

**Example 1:**
```
Input:
grids = [[a, b, c], [e, d, f],[c, a, m]]
Output:[[a, a, a], [a, f, a], [c, c, c], [e, b, e], [m, m, m]]
Explanation: you can get 5 lists by the paradiagonal, there are [a, a, a], [e, b, e], [c, d, c], [a,f, a], [m, m, m], then you need sort them and return them
```
