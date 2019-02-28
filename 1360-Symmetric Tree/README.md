# 1360. Symmetric Tree

Difficulty: Easy

https://www.lintcode.com/problem/symmetric-tree/description

**Description**  
Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).

**Example**  
Example1
```
Input: {1,2,2,3,4,4,3}
Output: true
Explanation:
    1
   / \
  2   2
 / \ / \
3  4 4  3
This binary tree {1,2,2,3,4,4,3} is symmetric
```
Example2
```
Input: {1,2,2,#,3,#,3}
Output: false
Explanation:
    1
   / \
  2   2
   \   \
   3    3
This is not a symmetric tree
```

**Challenge**  
Could you solve it both recursively and iteratively?