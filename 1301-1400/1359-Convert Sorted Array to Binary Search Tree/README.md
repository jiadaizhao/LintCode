# 1359. Convert Sorted Array to Binary Search Tree

Difficulty: Easy

https://www.lintcode.com/problem/convert-sorted-array-to-binary-search-tree/description

**Description**  
Given an array where elements are sorted in ascending order, convert it to a height balanced BST.

For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.

**Example 1:**
```
Input: [-10,-3,0,5,9]
Output: [0,-3,9,-10,#,5]
Explanation:
One possible answer is: [0,-3,9,-10,null,5], which represents the following height balanced BST:
      0
     / \
   -3   9
   /   /
 -10  5
```

**Example 2:**
```
Input: [1,3]
Output: [3,1]
Explanation:
One possible answer is: [3,1], which represents the following height balanced BST:
  3
 / 
1   
```
