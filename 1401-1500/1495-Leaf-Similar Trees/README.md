# 1495. Leaf-Similar Trees

Difficulty: Easy

https://www.lintcode.com/problem/leaf-similar-trees/description

**Description**  
Consider all the leaves of a binary tree.  From left to right order, the values of those leaves form a leaf value sequence.

![ex](tree.png)

For example, in the given tree above, the leaf value sequence is (6, 7, 4, 9, 8).

Two binary trees are considered leaf-similar if their leaf value sequence is the same.

Return true if and only if the two given trees with head nodes root1 and root2 are leaf-similar.

Both of the given trees will have between 1 and 100 nodes.

**Example 1:**
```
Input: {1,#,2,3}, {1,2,#,3}
Output: 
Explaination: 
the first tree:
  1
    \                
     2                
    /                 
   3   
the second tree:
    1
   /
  2
 /
3
The leaf value sequence is: [3], so the same
```

**Example 2:**
```
Input: {1,#,2,3}, {1,2,#,3}
Output: 
Explaination: 
the first tree:
  1
    \                
     2                
    /                 
   3   
the second tree:
   1
  / \                
 2   3    
The first leaf value sequence is: [3], the second tree is: [2, 3], so it is not the same
```
