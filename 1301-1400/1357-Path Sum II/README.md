# 1357. Path Sum II

Difficulty: Medium

https://www.lintcode.com/problem/path-sum-ii/description

**Description**  
Given a binary tree and a sum, find all root-to-leaf paths where each path's sum equals the given sum.

A leaf is a node with no children.

**Example 1:**
```
Input: root = {5,4,8,11,#,13,4,7,2,#,#,5,1}, sum = 22
              5
             / \
            4   8
           /   / \
          11  13  4
         /  \    / \
        7    2  5   1
Output: [[5,4,11,2],[5,8,4,5]]
Explanation:
The sum of the two paths is 22：
5 + 4 + 11 + 2 = 22
5 + 8 + 4 + 5 = 22
```

**Example 2:**
```
Input: root = {10,6,7,5,2,1,8,#,9}, sum = 18
              10
             /  \
            6    7
          /  \   / \
          5  2   1  8
           \ 
            9  
Output: [[10,6,2],[10,7,1]]
Explanation:
The sum of the two paths is 18：
10 + 6 + 2 = 18
10 + 7 + 1 = 18
```
