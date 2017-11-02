# 574. Build Post Office

Difficulty: Hard

http://www.lintcode.com/en/problem/build-post-office/

Given a 2D grid, each cell is either an house 1 or empty 0 (the number zero, one), find the place to build a post office, the distance that post office to all the house sum is smallest. Return the smallest distance. Return -1 if it is not possible.

**Notice**  
* You can pass through house and empty.
* You only build post office on an empty.

**Example**  
Given a grid:
```
0 1 0 0
1 0 1 1
0 1 0 0
```
return 6. (Placing a post office at (1,1), the distance that post office to all the house sum is smallest.)
