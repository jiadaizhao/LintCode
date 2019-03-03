# 844. Number Pair Statistics

Difficulty: Easy

http://www.lintcode.com/en/problem/number-pair-statistics/

Given a List <Point> p, find the number of (i,j) pairs that satisfy both p[i].x + p[j].x and p[i].y + p[j].y(i < j) can be divisible by 2.

**Notice**  
* The length of given list len <= 10000.

**Example**  
Given p = [[1,2],[3,4],[5,6]], return 3.
```
Explanation:
p[0],p[1],p[2] Pairwise Covering, the sum of their x and y can be divided by 2
```
Given p = [[0,3],[1,1],[3,4],[5,6]], return 1.
```
Explanation:
Only when p [2] and p [3] are combined, their sum of x and y can be divided by two.
```
