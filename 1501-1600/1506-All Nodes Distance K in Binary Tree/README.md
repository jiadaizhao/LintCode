# 1506. All Nodes Distance K in Binary Tree

Difficulty: Medium

https://www.lintcode.com/problem/all-nodes-distance-k-in-binary-tree/description

**Description**  
We are given a binary tree (with root node root), a target node, and an integer value K.

Return a list of the values of all nodes that have a distance K from the target node. The answer can be returned in any order.

1. The given tree is non-empty.
2. Each node in the tree has unique values 0 <= node.val <= 500.
3. The target node is a node in the tree.
4. 0 <= K <= 1000.

**Example 1:**
```
Input:
{3,5,1,6,2,0,8,#,#,7,4}
5
2

Output: [7,4,1]

Explanation: 
The nodes that are a distance 2 from the target node (with value 5)
have values 7, 4, and 1.
```
![ex1](tree.png)

**Example 2:**
```
Input:
{1,2,3,4}
2
1

Output: [1,4]

Explanation:
The binary tree is like this:
    1
   / \
  2   3
 /   
4   
The node 1 and 4 is 1 away from 2.
```
