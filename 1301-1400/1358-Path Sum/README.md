# 1358. Path Sum

Difficulty: Easy

https://www.lintcode.com/problem/path-sum/description

**Description**  
Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.

A leaf is a node with no children.

**Example 1:**
```
Input:tree = [5,4,8,11,#,13,4,7,2,#,#,#,#,#,1], sum = 22
Output: true
Explanation: Given the below binary tree
      5
     / \
    4   8
   /   / \
  11  13  4
 /  \      \
7    2      1
return true, as there exist a root-to-leaf path 5->4->11->2 which sum is 22.
```

**Example 2:**
```
Input:tree = [5,4,8], sum =18 
Output: false
```
