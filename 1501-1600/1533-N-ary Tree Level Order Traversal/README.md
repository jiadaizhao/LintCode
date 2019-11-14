# 1533. N-ary Tree Level Order Traversal

Difficulty: Easy

https://www.lintcode.com/problem/n-ary-tree-level-order-traversal/description

**Description**  
Given an n-ary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).

For example, given a 3-ary tree:
![ex](narytreeexample.png)

We should return its level order traversal:
```
[
     [1],
     [3,2,4],
     [5,6]
]
```
1. The depth of the tree is at most 1000.
2. The total number of nodes is at most 5000.

graph model explaination:
https://www.lintcode.com/help/graph

**Example 1:**
```
Input：{1,3,2,4#2#3,5,6#4#5#6}
Output：[[1],[3,2,4],[5,6]]
Explanation：Pictured above
```

**Example 2:**
```
Input：{1,3,2#2#3}
Output：[[1],[3,2]]
Explanation：
      1
	 / \
	3   2
```