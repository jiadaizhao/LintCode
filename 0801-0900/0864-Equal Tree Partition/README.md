# 864. Equal Tree Partition

Difficulty: Medium

http://lintcode.com/en/problem/equal-tree-partition/

Given a binary tree with n nodes, your task is to check if it's possible to partition the tree to two trees which have the equal sum of values after removing exactly one edge on the original tree.

**Notice**  
The range of tree node value is in the range of [-100000, 100000].
1 <= n <= 10000

**Example**  
```
Given     
    5
   / \
  10 10
    /  \
   2   3

return True
Explanation: 
    5
   / 
  10

Sum: 15

   10
  /  \
 2    3

Sum: 15
```
```
Given   
    1
   / \
  2  10
    /  \
   2   20

return False

Explanation: 
You can't split the tree into two trees with equal sum after removing exactly one edge on the tree.
```