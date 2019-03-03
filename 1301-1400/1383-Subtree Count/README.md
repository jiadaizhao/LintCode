# 1383. Subtree Count

Difficulty: Hard

https://www.lintcode.com/problem/subtree-count/leaderboard

**Description**  
There is a multi-branch tree whose n nodes are rooted at 1. Find the number of connected subgraphs of this tree. Since the middle part of the calculation and the answer may exceed the range of long, the answer is modulo 10000007. (Connected subgraph: optional x points (1 <= x <= n), any two points can reach each other)

1 <= |start|,|end|,n <= 10^5  
1 <= start[i],end[i] <= n

**Example**  
```
Given start = [1], end = [2], return 3.

Explanation:
There are 3 connected subgraphs [1], [2], [1→2].
Given start = [1,1], end = [2,3], return 6.

Explanation:
There are 6 connected subgraphs [1], [2], [3], [1→2], [1→3], [1→2,1→3].
Given start = [1,1,2], end = [2,3,4], return 10.

Explanation:
There are 10 connected subgraphs [1], [2], [3], [4], [1→2], [1→3], [2→4], [1→2,1→3], [1→2,2→4], [1→3,1→2,2→4] .
```
