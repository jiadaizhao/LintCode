# 677. Number of Big Islands

Difficulty: Medium

http://www.lintcode.com/en/problem/number-of-big-islands/

Given a boolean 2D matrix, 0 is represented as the sea, 1 is represented as the island. If two 1 is adjacent, we consider them in the same island. We only consider up/down/left/right adjacent.

Find the number of islands that size bigger or equal than K.

**Example**  
Given graph:
```
[
  [1, 1, 0, 0, 0],
  [0, 1, 0, 0, 1],
  [0, 0, 0, 1, 1],
  [0, 0, 0, 0, 0],
  [0, 0, 0, 0, 1]
]
```
Given the K = 2

return 2
