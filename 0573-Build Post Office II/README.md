# 573. Build Post Office II

Difficulty: Hard

http://www.lintcode.com/en/problem/build-post-office-ii/

Given a 2D grid, each cell is either a wall 2, an house 1 or empty 0 (the number zero, one, two), find a place to build a post office so that the sum of the distance from the post office to all the houses is smallest.

Return the smallest sum of distance. Return -1 if it is not possible.

**Notice**  
* You cannot pass through wall and house, but can pass through empty.
* You only build post office on an empty.

**Example**  
Given a grid:
```
0 1 0 0 0
1 0 0 2 1
0 1 0 0 0
```
return 8, You can build at (1,1). (Placing a post office at (1,1), the distance that post office to all the house sum is smallest.)
