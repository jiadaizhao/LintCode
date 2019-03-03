# 1381. Maximum Line Coverage

Difficulty: Hard

https://www.lintcode.com/problem/maximum-line-coverage/description

**Description**  
Given n line segments on a number axis. Select no more than k line segments. How many numbers at most can the selected line segments cover?

* 0 <= k <= n
* 1 <= n <= 2000
* The left and right endpoints of the line segment are greater than 0, not more than 2000.

**Example**  
```
Given intervals = [(1,2),(2,3),(3,4)], k = 2, return 4.

Explanation:
Select the line segment (1,2), (3,4), which can cover the 4 numbers of 1,2,3,4.
Given intervals = [(1,2),(2,3),(1,7)], k = 2, return 7.

Explanation:
Selecting the line segment (1,7) ,which can cover the 7 numbers of 1,2,3,4,5,6,7.
```
