# 707. Balance Graph

Difficulty: Super

http://www.lintcode.com/en/problem/balance-graph/

Given a directed graph where each edge is represented by a tuple, such as [u, v, w]represents an edge with a weight w from u to v.
You need to calculate at least the need to add the number of edges to ensure that each point of the weight are balancing. That is, the sum of weight of the edge pointing to this point is equal to the sum of weight of the edge of the point that points to the other point.

**Notice**
1. Note that u ≠ v and w > 0.
2. index may not be linear, e.g. we could have the points 0, 1, 2 or we could also have the points 0, 2, 6.

**Example**
```
For example:
Given a graph [[0,1,10],[2,0,5]] 
Return 2
Two edges are need to added. There are [1,0,5] and [1,2,5]

Given a graph [[0,1,10],[1,0,1],[1,2,5],[2,0,5]] 
Return 1
Only one edge need to added. There is [1,0,4]
```