# 598. Zombie in Matrix

Difficulty: Medium

http://www.lintcode.com/en/problem/zombie-in-matrix/

Given a 2D grid, each cell is either a wall 2, a zombie 1 or people 0 (the number zero, one, two).Zombies can turn the nearest people(up/down/left/right) into zombies every day, but can not through wall. How long will it take to turn all people into zombies? Return -1 if can not turn all people into zombies.

**Example**  
Given a matrix:
```
0 1 2 0 0
1 0 0 2 1
0 1 0 0 0
```
return 2
