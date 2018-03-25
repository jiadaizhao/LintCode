# 169. Tower of Hanoi

Difficulty: Medium

http://www.lintcode.com/en/problem/tower-of-hanoi/

Tower of Hanoi problem, is a well-known problem. On the A, B, C three pillars, there are n disks of different sizes (radii 1-n), they are stacked in a start on A, your goal is to a minimum number of legal steps to move all the plates move from A to C tower tower.
Each step in the rules of the game are as follows:
1. Each step is only allowed to move a plate (from the top of one pillars to the top of another pillars)
2. The process of moving, you must ensure that a large dish is not at the top of the small plates (small can be placed on top of a large, below the maximum plate size can not have any other dish)

Diagram:  
![alt text](hanoi.jpg)

**Example**  
Given n = 3

return ["from A to C","from A to B","from C to B","from A to C","from B to A","from B to C","from A to C"]
