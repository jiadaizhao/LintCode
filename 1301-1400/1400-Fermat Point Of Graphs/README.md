# 1400. Fermat Point Of Graphs

Difficulty: Hard

https://www.lintcode.com/problem/fermat-point-of-graphs/description

**Description**  
There is a non acyclic connected graph. Each edge is described by two vertices x[i] and y[i], and the length of each edge is described by d[i].
Find a point p such that the sum of distances from point p to other points is the smallest. If there is more than one such point p, return the smallest number.

* 2 <= n, d[i] <= 10^5
* 1 <= x[i], y[i] <= n

**Example**  
```
Given x = [1], y = [2], d = [3], return 1.

Explanation:
The distance from other points to 1 is 3, the distance from other points to 2 is 3, and the number of 1 is smaller.
Given x = [1,2,2], y = [2,3,4], d = [1,1,1], return 2.

Explanation:
The distance from other points to 1 is 5, the distance from other points to 2 is 3, the distance from other points to 3 is 5, and the distance from other points to 4 is 5.
```
