# 1647. Path Search

Difficulty: Medium

https://www.lintcode.com/problem/path-search/description

**Description**  
Given the undirected graph of n points and m edges, the point are numbered 0, 1, 2...(n-1). Output all the simple routes starting from point S to point T, and the output simple routes are in dictionary order sorting. When a route does not pass a node more than once, it is called a simple route.

Example: If there are three routes from point 0 to point 2: [0,1,2], [0,2] and [0,1,3,2]  
Then the output is:  
[[0,1,2],[0,1,3,2],[0,2]]

* n≤10
* m≤50

**Example 1:**
```
Input: n=4, G=[[0,1],[0,2],[1,2],[1,3],[3,2]], S=0, T=2,
Output: [[0,1,2],[0,1,3,2],[0,2]]
Explanation: There are three routes from 0 to 2:
[0,1,2],[0,1,3,2],[0,2]
```

**Example 2:**
```
Input: n=4, G=[[0,1],[2,3]], S=0, T=2,
Output: []
Explanation: There isn't any route from 0 to 2.
```
