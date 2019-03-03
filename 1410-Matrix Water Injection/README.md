# 1410. Matrix Water Injection

Difficulty: Easy

https://www.lintcode.com/problem/matrix-water-injection/description

**Description**  
Given a two-dimensional matrix, the value of each grid represents the height of the terrain. The flow of water will only flow up, down, right and left, and it must flow from the high ground to the low ground. As the matrix is surrounded by water, it is now filled with water from (R,C) and asked if water can flow out of the matrix.

* The input matrix size is n x n, n <= 200.
* Ensure that each height is a positive integer.

**Example**  
Example1
```
Input: 
mat =
[
    [10,18,13],
    [9,8,7],
    [1,2,3]
] and R = 1, C = 1
Output: "YES"
Explanation: 
(1,1) →(1,2)→Outflow.
```
Example2
```
Input: 
mat = 
[
    [10,18,13],
    [9,7,8],
    [1,11,3]
] and R = 1, C = 1
Output: "NO"
Explanation: 
Since (1,1) cannot flow to any other grid, it cannot flow out.
```
