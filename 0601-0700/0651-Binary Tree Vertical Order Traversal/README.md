# 651. Binary Tree Vertical Order Traversal

Difficulty: Medium

http://www.lintcode.com/en/problem/binary-tree-vertical-order-traversal/

Given a binary tree, return the vertical order traversal of its nodes' values. (ie, from top to bottom, column by column).

If two nodes are in the same row and column, the order should be from left to right.

**Example**  
Given binary tree {3,9,20,#,#,15,7}
```
   3
  /\
 /  \
 9  20
    /\
   /  \
  15   7
```
Return its vertical order traversal as:
[[9],[3,15],[20],[7]]

Given binary tree {3,9,8,4,0,1,7}
```
     3
    /\
   /  \
   9   8
  /\  /\
 /  \/  \
 4  01   7
```
Return its vertical order traversal as:
[[4],[9],[3,0,1],[8],[7]]
