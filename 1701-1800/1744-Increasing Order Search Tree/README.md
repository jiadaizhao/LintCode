# 1744. Increasing Order Search Tree

Difficulty: Easy

https://www.lintcode.com/problem/increasing-order-search-tree/description

**Description**  
Given a binary search tree, rearrange the tree in in-order so that the leftmost node in the tree is now the root of the tree, and every node has no left child and only 1 right child.

1. The number of nodes in the given tree will be between 1 and 100.
2. Each node will have a unique integer value from 0 to 1000.

**Example 1:**
```
Input: root = {5,3,6,2,4,#,8,1,#,#,#,7,9}

       5
      / \
    3    6
   / \    \
  2   4    8
 /        / \ 
1        7   9

Output: {1,#,2,#,3,#,4,#,5,#,6,#,7,#,8,#,9}
Explanation:
 1
  \
   2
    \
     3
      \
       4
        \
         5
          \
           6
            \
             7
              \
               8
                \
                 9  
```

**Example 2:**
```
Input: root = {8,3,10,1,6,#,14,#,#,4,7,13,#}
       8
      /  \
    3     10
   / \      \
  1   6      14
      / \   / 
     4   7  13
Output: {1,#,3,#,4,#,6,#,7,#,8,#,10,#,13,#,14}
Explanation:
1
 \
  3
   \
    4
     \
      6
       \
        7
         \
          8
           \
            10
             \
              13
               \
                14
```
