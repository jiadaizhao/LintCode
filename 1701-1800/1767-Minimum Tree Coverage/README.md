# 1767. Minimum Tree Coverage

Difficulty: Hard

https://www.lintcode.com/problem/minimum-tree-coverage/description

**Description**  
Given a tree of n nodes and a positive integer k, the length of edge of the tree is 1. you can place a person in any nodes of tree. This person can supervise all nodes that are no more than k from the node of person. Out put the minimum number of person that can be placed to supervise the entire tree.

* 1≤k≤n≤1e5
* the input array a is the edge set of tree.

**Example 1:**
```
Input：[[1,2],[2,3],[2,4],[4,5],[1,6],[2,7],[5,8],[2,9],[5,10],[2,11],[3,12],[9,13],[11,14]],8
Output：1
Explanation：You can place a person at node 1, and he can supervise other nodes.
```

**Example 2:**
```
Input：[[1,2],[1,3],[1,4],[1,5]],1
Output：1
Explanation：You can place a person at node 1, and he can supervise node 1, 2, 3, 4, 5.
```
