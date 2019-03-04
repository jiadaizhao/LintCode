# 854. Closest Leaf in a Binary Tree

Difficulty: Medium

https://www.lintcode.com/problem/closest-leaf-in-a-binary-tree/description

**Description**  
Given a binary tree where every node has a unique value, and a target key k, find the value of the nearest leaf node to target k in the tree.If there are multiple cases, return to the leftmost leaf node.

Here, nearest to a leaf means the least number of edges travelled on the binary tree to reach any leaf of the tree. Also, a node is called a leaf if it has no children.

**Notice**  
1. root represents a binary tree with at least 1 node and at most 1000 nodes.
2. Every node has a unique node.val in range [1, 1000].
3. There exists some node in the given binary tree for which node.val == k.

**Example**  
Example 1:
```
Given:
root = {1, 3, 2}, k = 1
Diagram of binary tree:
          1
         / \
        3   2

Return: 3

Explanation: Either 2 or 3 is the nearest leaf node to the target of 1.3 is the leftmost leaf node.
```
Example 2:
```
Given:
root = {1}, k = 1
Return: 1

Explanation: The nearest leaf node is the root node itself.
```
Example 3:
```
Given:
root = {1,2,3,4,#,#,#,5,#,6}, k = 2
Diagram of binary tree:
             1
            / \
           2   3
          /
         4
        /
       5
      /
     6

Return: 3
Explanation: The leaf node with value 3 (and not the leaf node with value 6) is nearest to the node with value 2.
```
