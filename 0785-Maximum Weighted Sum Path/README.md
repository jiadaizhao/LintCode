# 785. Maximum Weighted Sum Path

Difficulty: Medium

http://www.lintcode.com/en/problem/maximum-weighted-sum-path/

A robot is located at the top-right corner of a m x n grid.
The robot can only move either down or left at any point in time. The robot is trying to reach the bottom-left corner of the grid.Every grid has a number,the robot wants to get the max weighted sum path.
What is the maximum weighted sum path?

**Notice**  
* Given a matrix of size n x m, and guarantee n <= 200, m <= 200
* Problem data guarantee 0 <= i <= n-1 , 0 <= j <= m-1, nums[i][j] <= 100000.

**Example**  
```
Give
[
[1,2,3,4],
[3,5,6,7],
[9,10,1,2],
[4,4,5,5]
]
,return 45.

Explanation:
The path is [4,7,6,5,10,9,4].
Give
[
[1,2,3],
[4,5,6],
[7,9,8]
]
,return 33.

Explanation:
The path is [3,6,8,9,7].
```
