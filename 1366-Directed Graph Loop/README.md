# 1366. Directed Graph Loop

Difficulty: Medium

https://lintcode.com/problem/directed-graph-loop/description

**Description**  
Please judge whether there is a cycle in the directed graph with n vertices and m edges. The parameter is two int arrays. There is a directed edge from start[i] to end[i].

**Notice**  
* 2 <= n <= 10^5
* 1 <= m <= 4*10^5
* 1 <= start[i], end[i] <= n

**Example**  
Given start = [1],end = [2], return "False"。
```
Explanation:
There is only one edge 1->2, and do not form a cycle.
```
Given start = [1,2,3],end = [2,3,1], return "True".
```
Explanation:
There is a cycle 1->2->3->1.
```
