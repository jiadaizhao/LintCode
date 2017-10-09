# 87. Remove Node in Binary Search Tree

Difficulty: Hard

http://lintcode.com/en/problem/remove-node-in-binary-search-tree/

Given a root of Binary Search Tree with unique value for each node. Remove the node with given value. If there is no such a node with given value in the binary search tree, do nothing. You should keep the tree still a binary search tree after removal.

**Example**  
Given binary search tree:
```
    5
   / \
  3   6
 / \
2   4
```
Remove 3, you can either return:
```
    5
   / \
  2   6
   \
    4
```
or
```
    5
   / \
  4   6
 /
2
```
