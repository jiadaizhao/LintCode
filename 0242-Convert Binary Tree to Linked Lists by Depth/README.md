# 232. Convert Binary Tree to Linked Lists by Depth

Difficulty: Easy

http://www.lintcode.com/en/problem/convert-binary-tree-to-linked-lists-by-depth/

Given a binary tree, design an algorithm which creates a linked list of all the nodes at each depth (e.g., if you have a tree with depth D, you'll have D linked lists).

**Example**  
Given binary tree:
```
    1
   / \
  2   3
 /
4
```
return
````
[
  1->null,
  2->3->null,
  4->null
]
```
