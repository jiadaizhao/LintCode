# 1504. Shortest Path to Get All Keys

Difficulty: Hard

https://www.lintcode.com/problem/shortest-path-to-get-all-keys/description

**Description**  
We are given a 2-dimensional grid. "." is an empty cell, "#" is a wall, "@" is the starting point, ("a", "b", ...) are keys, and ("A", "B", ...) are locks.

We start at the starting point, and one move consists of walking one space in one of the 4 cardinal directions. We cannot walk outside the grid, or walk into a wall. If we walk over a key, we pick it up. We can't walk over a lock unless we have the corresponding key.

For some 1 <= K <= 6, there is exactly one lowercase and one uppercase letter of the first K letters of the English alphabet in the grid. This means that there is exactly one key for each lock, and one lock for each key; and also that the letters used to represent the keys and locks were chosen in the same order as the English alphabet.

Return the lowest number of moves to acquire all keys. If it's impossible, return -1.

1. 1 <= grid.length <= 30
2. 1 <= grid[0].length <= 30
3. grid[i][j] contains only '.', '#', '@', 'a'-'f' and 'A'-'F'
4. The number of keys is in [1, 6]. Each key has a different letter and opens exactly one lock.

**Example 1:**
```
Input: ["@.a.#","###.#","b.A.B"]
Output: 8
Explanation：[0,0]->[0,1]->[0,2]->->[0,3]->[1,3]->[2,3]->[2,2]->[2,1]->[2,0]
```

**Example 2:**
```
Input: ["@..aA","..B#.","....b"]
Output: 6
Explanation：[0,0]->[0,1]->[0,2]->[0,3]->[0,4]->[1,4]->[2,4]
```
