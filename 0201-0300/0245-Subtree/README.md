# 245. Subtree

Difficulty: Easy

http://www.lintcode.com/en/problem/subtree/

You have two every large binary trees: T1, with millions of nodes, and T2, with hundreds of nodes. Create an algorithm to decide if T2 is a subtree of T1.

**Notice**  
A tree T2 is a subtree of T1 if there exists a node n in T1 such that the subtree of n is identical to T2. That is, if you cut off the tree at node n, the two trees would be identical.

**Example**  
T2 is a subtree of T1 in the following case:
```
       1                3
      / \              / 
T1 = 2   3      T2 =  4
        /
       4
```
T2 isn't a subtree of T1 in the following case:
```
       1               3
      / \               \
T1 = 2   3       T2 =    4
        /
       4
```
