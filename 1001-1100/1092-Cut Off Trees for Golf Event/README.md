# 1092. Cut Off Trees for Golf Event

Difficulty: Hard

https://www.lintcode.com/problem/cut-off-trees-for-golf-event/description

**Description**  
You are asked to cut off trees in a forest for a golf event. The forest is represented as a non-negative 2D map, in this map:

1. 0 represents the obstacle can't be reached.
2. 1 represents the ground can be walked through.
3. The place with number bigger than 1 represents a tree can be walked through, and this positive number represents the tree's height.

You are asked to cut off all the trees in this forest in the order of tree's height - always cut off the tree with lowest height first. And after cutting, the original place has the tree will become a grass (value 1).

You will start from the point (0, 0) and you should output the minimum steps you need to walk to cut off all the trees. If you can't cut off all the trees, output -1 in that situation.

You are guaranteed that no two trees have the same height and there is at least one tree needs to be cut off.

* size of the given matrix will not exceed 50x50.

**Example**  
```
Input:
[
[1,2,3],
[0,0,4],
[7,6,5]
]
Output: 6

Input:
[
[1,2,3],
[0,0,0],
[7,6,5]
]
Output: -1

Input:
[
[2,3,4],
[0,0,5],
[8,7,6]
]
Output: 6
Explanation: You started from the point (0,0) and you can cut off the tree in (0,0) directly without walking.
```