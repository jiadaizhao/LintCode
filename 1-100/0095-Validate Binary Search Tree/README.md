# 95. Validate Binary Search Tree

Difficulty: Medium

http://lintcode.com/en/problem/validate-binary-search-tree/

Given a binary tree, determine if it is a valid binary search tree (BST).

Assume a BST is defined as follows:

* The left subtree of a node contains only nodes with keys less than the node's key.
* The right subtree of a node contains only nodes with keys greater than the node's key.
* Both the left and right subtrees must also be binary search trees.
* A single node tree is a BST

**Example**  
An example:
```
  2
 / \
1   4
   / \
  3   5
```
The above binary tree is serialized as {2,1,4,#,#,3,5} (in level order).
