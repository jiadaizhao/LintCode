# 86. Binary Search Tree Iterator

Difficulty: Hard

http://lintcode.com/en/problem/binary-search-tree-iterator/

Design an iterator over a binary search tree with the following rules:

* Elements are visited in ascending order (i.e. an in-order traversal)
* next() and hasNext() queries run in O(1) time in average.

**Example**  
For the following binary search tree, in-order traversal by using iterator is [1, 6, 10, 11, 12]
```
   10
 /    \
1      11
 \       \
  6       12
```
