# 863. Binary Tree Path Sum IV

Difficulty: Medium

http://www.lintcode.com/en/problem/binary-tree-path-sum-iv/

If the depth of a tree is smaller than 5, then this tree can be represented by a list of three-digits integers.

For each integer in this list:
1. The hundreds digit represents the depth D of this node, 1 <= D <= 4.
2. The tens digit represents the position P of this node in the level it belongs to, 1 <= P <= 8. The position is the same as that in a full binary tree.
3. The units digit represents the value V of this node, 0 <= V <= 9.
Given a list of ascending three-digits integers representing a binary with the depth smaller than 5. You need to return the sum of all paths from the root towards the leaves.

**Example**  
Given nums = [113, 215, 221], return 12.
```
Explanation: 
The tree that the list represents is:
    3
   / \
  5   1

The path sum is (3 + 5) + (3 + 1) = 12.
```
Given nums = [113, 221], return 4.
```
Explanation: 
The tree that the list represents is: 
    3
     \
      1

The path sum is (3 + 1) = 4.
```
